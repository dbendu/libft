#include "ft_list.h"

void	ft_lstadd(t_list **list, t_list *new_elem)
{
	if (list && new_elem)
	{
		new_elem->next = *list;
		*list = new_elem;
		if ((*list)->next)
			(*list)->end = (*list)->next->end;
	}
}
