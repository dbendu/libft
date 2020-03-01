#ifndef UTILS_H
# define UTILS_H

# define FT_BIG_ENDIAN		(1)
# define FT_LITTLE_ENDIAN	(0)

# define GNL_BUFF			1024

# include <stdlib.h>
# include <unistd.h>
# include "ft_types.h"
# include "ft_string.h"
# include "ft_memory.h"

int			ft_min(int a, int b);
int			ft_max(int a, int b);
void		ft_swap(void *restrict ptr1, void *restrict ptr2, size_t bytes);
void		ft_assert(t_bool expr, const char *msg);
void		ft_error(const char *msg, const char *func, int code);
int			bytes_order(void);
int			get_next_line(const int fd, char **line);
int			ft_atoi(const char *str);

#endif