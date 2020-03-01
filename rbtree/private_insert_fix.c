#include "private_rbtree.h"

static int				is_on_one_direction(t_node *node)
{
	t_node		*parent;
	t_node		*grand;
	t_bool		is_node_left;
	t_bool		is_uncle_left;

	parent = node->parent;
	grand = parent->parent;
	if (grand->left != parent)
		is_uncle_left = TRUE;
	else
		is_uncle_left = FALSE;
	if (parent->left == node)
		is_node_left = TRUE;
	else
		is_node_left = FALSE;
	if (is_node_left && is_uncle_left)
		return (LEFT);
	else if (!is_node_left && !is_uncle_left)
		return (RIGHT);
	else
		return (0);
}

static t_node			*get_uncle(t_node *node)
{
	t_node		*parent;
	t_node		*grand;

	parent = node->parent;
	if (!parent || !parent->parent)
		return (NULL);
	grand = parent->parent;
	if (grand->left == parent)
		return (grand->right);
	return (grand->left);
}

/*
* ascii изображения с наглядным представлением работы функций поворота есть в
* file.txt
*/
static void				fix_black_uncle(t_rbtree *tree, t_node *node)
{
	int direction;

	direction = is_on_one_direction(node);
	if (direction == LEFT)
	{
		small_rotate_right(node);
		node = node->right;
	}
	else if (direction == RIGHT)
	{
		small_rotate_left(node);
		node = node->left;
	}
	if (node->parent->left == node)
		rotate_right(tree, node->parent->parent);
	else
		rotate_left(tree, node->parent->parent);
}

static void				fix_red_uncle(t_node *node, t_node *uncle)
{
	node->parent->color = BLACK;
	uncle->color = BLACK;
	node = uncle->parent;
	node->color = RED;
	if (!node->parent)
		node->color = BLACK;
}

void					insert_fix(t_rbtree *tree, t_node *node)
{
	t_node		*uncle;

	while (TRUE)
	{
		if (!node->parent || node->parent->color == BLACK)
			break ;
		uncle = get_uncle(node);
		if (!uncle || uncle->color == BLACK)
		{
			fix_black_uncle(tree, node);
			break ;
		}
		else
		{
			fix_red_uncle(node, uncle);
			node = node->parent->parent;
		}
	}
}
