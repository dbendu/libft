#include "ft_bits_arr.h"

void            barr_fill_false(t_barr *arr)
{
	size_t      iter;

	iter = 0;
	while (iter < arr->size_in_int_ws)
	{
		arr->data[iter] = 0;
		++iter;
	}
}
