#include "red_black_tree.h"

/*
* Если при удалении дерева не понадобится освобождать память, выделенную под
* key и value, в аргументы соотв. функций можно передать NULL.
* Но функция сравнения элементов обязана иметь ненулевой адрес, т.к. она
* необходима для операций вставки, поиска и удаления элементов.
*
* В случае, если в аргументы функции сравнения элементов был передан NULL,
* функция вернет NULL как знак ошибки.
* В случае, если система не сможет выделить память под структуру t_rbtree,
* также будет возвращен NULL.
*/
t_rbtree					*rbtree_create(int(*cmp_func)(void*, void*),
										void(*keydel_func)(void*),
										void(*valuedel_func)(void*))
{
	t_rbtree				*tree;

	if (!cmp_func)
		return (NULL);
	tree = malloc(sizeof(t_rbtree));
	if (!tree)
		return (NULL);
	tree->cmp_func = cmp_func;
	tree->keydel_func = keydel_func;
	tree->valuedel_func = valuedel_func;
	tree->head = NULL;
	tree->count = 0;
	return (tree);
}
