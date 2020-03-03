#ifndef PRIVATE_BITS_ARRAY_H
# define PRIVATE_BITS_ARRAY_H

# include "ft_bits_arr.h"

typedef struct			s_barr
{
	size_t				size_in_int_ws;
	size_t				size_in_bits;
	t_int_ws			*data;
}						t_barr;

#endif
