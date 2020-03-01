#include "ft_list.h"

size_t	ft_lstsize(const t_list *list)
{
	size_t size;

	size = 0;
	while (list)
	{
		++size;
		list = list->next;
	}
	return (size);
}
