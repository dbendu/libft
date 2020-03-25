#include "autostring.h"

string		string_create(size_t len)
{
	t_string	*str;

	if (!len)
		len = 32;
	str = malloc(sizeof(t_string) + len + 1);
	str->capacity = len;
	str->lenght = len;
	str->str = (void*)str + sizeof(t_string);
	ft_memset(str->str, '\0', len + 1);
	return (str->str);
}

string		string_create_from_src(const char *src)
{
	size_t		srclen;
	t_string	*str;

	srclen = ft_strlen(src);
	str = malloc(sizeof(t_string) + srclen + 1);
	str->capacity = srclen;
	str->lenght = srclen;
	str->str = (void*)str + sizeof(t_string);
	ft_memcpy(str->str, src, srclen + 1);
	return (str->str);
}

string		string_create_from_srcn(const char *src, size_t symbols)
{
	t_string	*str;

	str = malloc(sizeof(t_string) + symbols + 1);
	str->capacity = symbols;
	str->lenght = symbols;
	str->str = (void*)str + sizeof(t_string);
	ft_memcpy(str->str, src, symbols + 1);
	return (str->str);
}
