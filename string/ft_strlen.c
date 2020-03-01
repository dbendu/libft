#include "ft_string.h"

size_t	ft_strlen(const char *str)
{
	register const char *iter;

	if (!str)
		return (0);
	iter = str;
	while (*iter)
		++iter;
	return (iter - str);
}
