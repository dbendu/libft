#ifndef AUTOSTRING_H
# define AUTOSTRING_H

# include "ft_memory.h"

typedef char*		string;

typedef struct		s_string
{
	size_t			lenght;
	size_t			capacity;
	char			*str;
}					t_string;

string				string_create(size_t len);
string				string_create_from_src(const char *src);
string				string_create_from_srcn(const char *src, size_t symbols);
string				string_append(string *str, const char *to_append);
string				*string_append_n(string *str,
									const char *to_append,
									size_t symbols);



#endif
