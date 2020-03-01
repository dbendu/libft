#ifndef RED_BLACK_TREE_PRIVATE
# define RED_BLACK_TREE_PRIVATE

# include "red_black_tree.h"

void			insert_fix(t_rbtree *tree, t_node *node);

void			small_rotate_right(t_node *node);
void			small_rotate_left(t_node *node);
void			rotate_right(t_rbtree *tree, t_node *root);
void			rotate_left(t_rbtree *tree, t_node *root);

#endif
