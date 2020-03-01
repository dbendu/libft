#include "ft_string.h"

char	*ft_strchr(const char *str, int character)
{
	while (*str)
	{
		if (*str == character)
			return ((char*)str);
		++str;
	}
	if (character == '\0')
		return ((char*)str);
	return (NULL);
}
