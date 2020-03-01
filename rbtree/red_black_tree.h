#ifndef RED_BLACK_TREE
# define RED_BLACK_TREE

#include <stdlib.h>

# define TRUE			1
# define FALSE			0
# define RED			1
# define BLACK			0
# define LEFT			-1
# define RIGHT			1

typedef unsigned char	t_bool;

typedef struct			s_node
{
	void				*key;
	void				*value;
	struct s_node		*left;
	struct s_node		*right;
	struct s_node		*parent;
	t_bool				color;
}						t_node;

typedef struct			s_rbtree
{
	void				(*keydel_func)(void*);
	void				(*valuedel_func)(void*);
	int					(*cmp_func)(void*, void*);
	t_node				*head;
	size_t				count;
}						t_rbtree;

t_rbtree				*rbtree_create(int(*cmp_func)(void*, void*),
										void(*keydel_func)(void*),
										void(*valuedel_func)(void*));
void					rbtree_destroy(t_rbtree *tree);

int						rbtree_insert(t_rbtree *tree, void *key, void *value);
void					*rbtree_find(t_rbtree *tree, void *key);

size_t					rbtree_count(t_rbtree *tree);

#endif
