#ifndef FT_STRING_H
# define FT_STRING_H

#include "ft_types.h"
#include "ft_memory.h"

int			ft_strcmp(const char *str1, const char *str2);
char		*ft_strchr(const char *str, int character);
char		*ft_strdup(const char *str);
int			ft_strequ(const char *s1, const char *s2);
size_t		ft_strlen(const char *str);

t_bool		ft_isspace(int c);
t_bool		ft_isdigit(int c);
t_bool		ft_isalpha(int c);

#endif
