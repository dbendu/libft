#ifndef LIST_H
# define LIST_H

# include "stdlib.h"
# include "ft_types.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
	struct s_list	*end;
}					t_list;

size_t				ft_lstsize(const t_list *list);
void				ft_lstpurge(t_list **list);
void				ft_lstpopback(t_list **list);
void				ft_lstpop(t_list **list);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstextend(t_list **list, t_list **add);
void				ft_lstdelone(t_list **list);
void				ft_lstdelete(t_list **list, t_list **del);
void				ft_lstappend(t_list **list, t_list *new);
void				ft_lstadd(t_list **list, t_list *new_elem);

#endif
