#include "ft_warning.h"
#include "private_warning.h"

void			warning_print(void)
{
	const t_warning_list	*warning_list = *get_warning_list();
	t_warning				*iter;

	buf_create(2, 1024);
	iter = warning_list->warnings;
	while (iter)
	{
		buf_add_strn("\e[38;5;99mWarning\e[0m: ", 23);
		buf_add_line(iter->message);
		iter = iter->next;
	}
	if (warning_list->errors_end && warning_list->warnings)
		buf_add_chr('\n', 1);
	iter = warning_list->errors;
	while (iter)
	{
		buf_add_strn("\e[38;5;001mError\e[0m: ", 22);
		buf_add_line(iter->message);
		iter = iter->next;
	}
	buf_destroy();
}
