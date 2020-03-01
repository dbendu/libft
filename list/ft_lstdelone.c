#include "ft_list.h"

void	ft_lstdelone(t_list **list)
{
	if (!list || !*list)
		return ;
	free((*list)->content);
	free(*list);
	*list = NULL;
}
