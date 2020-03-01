#include "ft_list.h"

void	ft_lstextend(t_list **list, t_list **add)
{
	if (!list || !add)
		return ;
	if (*list)
	{
		if (*add)
		{
			(*list)->end->next = *add;
			(*list)->end = (*add)->end;
		}
	}
	else if (*add)
		*list = *add;
}
