#include "ft_list.h"

void	ft_lstpurge(t_list **list)
{
	register t_list *iter;
	register t_list *temp;

	if (!list || !*list)
		return ;
	iter = *list;
	while (iter)
	{
		temp = iter->next;
		free(iter->content);
		free(iter);
		iter = temp;
	}
	*list = NULL;
}
