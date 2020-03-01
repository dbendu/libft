#include "ft_list.h"

void	ft_lstpop(t_list **list)
{
	t_list *temp;

	if (!list || !*list)
		return ;
	if ((*list)->next)
		(*list)->next->end = (*list)->end;
	temp = (*list)->next;
	free((*list)->content);
	free(*list);
	*list = temp;
}
