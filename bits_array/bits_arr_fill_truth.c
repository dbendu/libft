#include "ft_bits_arr.h"

void            barr_fill_truth(t_barr *arr)
{
	size_t      iter;

	iter = 0;
	while (iter < arr->size_in_int_ws)
	{
		arr->data[iter] = T_INT_WS_MAX;
		++iter;
	}
}
