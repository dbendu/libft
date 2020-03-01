#include "red_black_tree.h"
#include "private_rbtree.h"

static t_node			*node_create(void *key, void *value)
{
	t_node				*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->key = key;
	node->value = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = NULL;
	node->color = RED;
	return (node);
}

static int				insert(t_rbtree *tree, t_node *node)
{
	t_node	*head;
	int		cmp;

	head = tree->head;
	while (TRUE)
	{
		cmp = tree->cmp_func(node->key, head->key);
		if (!cmp)
			return (0);
		if (cmp < 0 && head->left)
			head = head->left;
		else if (cmp > 0 && head->right)
			head = head->right;
		else
			break;
	}
	if (cmp < 0)
		head->left = node;
	else
		head->right = node;
	node->parent = head;
	insert_fix(tree, node);
	return (1);
}

/*
* Если указатель на дерево имеет нулевое значение или система не смогла выделить
* память под новый узел, функция вернет -1. Если в дереве уже был элемент с
* эквивалентным ключом, добавление не будет произведено, а функция вернет 0.
* Если добавление прошло удачно, функция вернет 1
*/
int						rbtree_insert(t_rbtree *tree, void *key, void *value)
{
	t_node		*node;
	int			ret;

	if (!tree)
		return (-1);
	node = node_create(key, value);
	if (!node)
		return (-1);
	if (!tree->head)
	{
		tree->head = node;
		node->color = BLACK;
		++tree->count;
		return (1);
	}
	else
	{
		ret = insert(tree, node);
		tree->count += ret;
		return (ret);
	}
}
