#include <stdlib.h>
#include "ft_string.h"

char	*ft_strdup(const char *str)
{
	char	*new_str;
	size_t	size;

	size = ft_strlen(str) + 1;
	new_str = (char*)malloc(size);
	return ((char*)ft_memcpy(new_str, str, size));
}
