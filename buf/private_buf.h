#ifndef PRIVATE_BUF_H
# define PRIVATE_BUF_H

# include "ft_buf.h"

typedef struct			s_buf
{
	size_t				size;
	size_t				pos;
	size_t				printed;
	int					fd;
	char				*buf;
}						t_buf;

t_buf		**get_buf(void);

#endif
