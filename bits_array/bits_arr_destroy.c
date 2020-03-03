#include "ft_bits_arr.h"
#include "private_bits_array.h"

#ifdef SAFE_MODE

void			barr_destroy(t_barr *arr)
{
	if (!arr)
		ft_error("invalid param \"arr\": NULL", "barr_destroy", 0);
	free(arr->data);
	free(arr);
}

#else

void			barr_destroy(t_barr *arr)
{
	free(arr->data);
	free(arr);
}

#endif
