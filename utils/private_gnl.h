#ifndef PRIVATE_GNL_H
# define PRIVATE_GNL_H

# include <fcntl.h>
# include "ft_types.h"

# define __GNL_FOUNDED		(1)
# define __GNL_NOT_FOUNDED	(0)

typedef struct			s_gnl_list
{
	char				*str;
	size_t				strlen;
	struct s_gnl_list	*next;
	struct s_gnl_list	*end;
	size_t				total_len;
	t_bool				is_from_sources;
}						t_gnl_list;

t_gnl_list				*gnl_create_list(char *str, size_t strlen);
t_gnl_list				*gnl_create_list_from_src(char *str, size_t strlen);
void					gnl_add_node(t_gnl_list **list, t_gnl_list *node);

#endif
