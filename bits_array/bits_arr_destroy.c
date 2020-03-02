#include "ft_bits_arr.h"

void			barr_destroy(t_barr *barr)
{
	free(barr->data);
	free(barr);
}