#include "red_black_tree.h"

static void		*find(t_node *head, void *key, int (*cmp_func)(void*, void*))
{
	int cmp;

	while (TRUE)
	{
		cmp = cmp_func(key, head->key);
		if (!cmp)
			break;
		else if (cmp < 0)
		{
			if (head->left)
				head = head->left;
			else
				return (NULL);
		}
		else
		{
			if (head->right)
				head = head->right;
			else
				return (NULL);
		}
	}
	return (head->value);
}

/*
* Если указатель на дерево имеет нулевое значение, или дерево пустое,
* или если в дереве не будет найден элемент с указанным ключом, функция вернет
* NULL. Если элемент был найден, вернется привязанное его ключу значение
*/
void			*rbtree_find(t_rbtree *tree, void *key)
{
	if (!tree || !tree->head)
		return (NULL);
	else
		return (find(tree->head, key, tree->cmp_func));
}