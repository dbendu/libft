#include "ft_warning.h"
#include "private_warning.h"

inline void	warning_create(void)
{
	t_warning_list	**warning_list;

	warning_list = get_warning_list();
	*warning_list = ft_calloc(1, sizeof(t_warning_list));
}
