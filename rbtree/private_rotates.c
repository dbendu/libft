#include "private_rbtree.h"

void			small_rotate_right(t_node *node)
{
	t_node		*parent;
	t_node		*grand;

	parent = node->parent;
	grand = parent->parent;
	if (grand->left == parent)
		grand->left = node;
	else
		grand->right = node;
	node->parent = grand;
	parent->left = node->right;
	if (parent->left)
		parent->left->parent = parent;
	node->right = parent;
	parent->parent = node;
}

void			small_rotate_left(t_node *node)
{
	t_node		*parent;
	t_node		*grand;

	parent = node->parent;
	grand = parent->parent;
	if (grand->left == parent)
		grand->left = node;
	else
		grand->right = node;
	node->parent = grand;
	parent->right = node->left;
	if (parent->right)
		parent->right->parent = parent;
	node->left = parent;
	parent->parent = node;
}

void			rotate_right(t_rbtree *tree, t_node *root)
{
	t_node		*child;
	t_node		*root_parent;

	child = root->left;
	root_parent = root->parent;
	child->parent = root_parent;
	root->left = child->right;
	if (root->left)
		root->left->parent = root;
	root->parent = child;
	child->right = root;
	child->color = BLACK;
	root->color = RED;
	if (!root_parent)
		tree->head = child;
	else
	{
		if (root_parent->left == root)
			root_parent->left = child;
		else
			root_parent->right = child;
	}
}

void			rotate_left(t_rbtree *tree, t_node *root)
{
	t_node		*child;
	t_node		*root_parent;

	child = root->right;
	root_parent = root->parent;
	child->parent = root_parent;
	root->right = child->left;
	if (root->right)
		root->right->parent = root;
	root->parent = child;
	child->left = root;
	child->color = BLACK;
	root->color = RED;
	if (!root_parent)
		tree->head = child;
	else
	{
		if (root_parent->left == root)
			root_parent->left = child;
		else
			root_parent->right = child;
	}
}