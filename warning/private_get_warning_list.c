#include "private_warning.h"

t_warning_list	**get_warning_list(void)
{
	static		t_warning_list	*warning_list;

	return (&warning_list);
}
