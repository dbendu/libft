#include "ft_list.h"
#include "ft_memory.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_elem;

	if (!content)
		return (NULL);
	new_elem = (t_list*)malloc(sizeof(t_list));
	new_elem->content = malloc(content_size);
	ft_memcpy(new_elem->content, content, content_size);
	new_elem->content_size = content_size;
	new_elem->next = NULL;
	return (new_elem);
}
