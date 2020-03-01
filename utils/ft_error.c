#include "ft_utils.h"

void		ft_error(const char *msg, const char *func, int code)
{
	if (func)
	{
		write(2, "\e[38;5;196mError\e[0m in function ", 33);
		write(2, func, ft_strlen(func));
	}
	if (msg)
	{
		if (!func)
			write(2, "\e[38;5;196mError\e[0m", 20);
		write(2, ": ", 2);
		write(2, msg, ft_strlen(msg));
	}
	if (func || msg)
		write(2, "\n", 1);
	exit(code);
}
