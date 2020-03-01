#include "ft_utils.h"
#include "ft_string.h"

void			ft_assert(t_bool expr, const char *msg)
{
	if (!expr)
	{
		write(2, msg, ft_strlen(msg));
		write(2, "\n", 1);
		exit(0);
	}
}
