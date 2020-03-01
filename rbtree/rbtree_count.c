#include "red_black_tree.h"

size_t			rbtree_count(t_rbtree *tree)
{
	if (!tree)
		return (0);
	else
		return (tree->count);
}