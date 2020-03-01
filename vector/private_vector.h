#ifndef PRIVATE_VECTOR_H
# define PRIVATE_VECTOR_H

# include "ft_vector.h"

typedef struct			s_vector
{
	size_t				size;
	size_t				capacity;
	size_t				typesize;
	void				*data;
}						t_vector;

#endif
