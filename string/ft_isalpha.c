#include "ft_string.h"

t_bool	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'));
}
