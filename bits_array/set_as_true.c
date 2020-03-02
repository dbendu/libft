#include "ft_bits_arr.h"

void		barr_set_as_true(t_barr *barr, size_t bit_index)
{
	size_t	word;
	size_t	bit;

	word = bit_index / WORD_SIZE;
	bit = bit_index & (size_t)(WORD_SIZE - 1);
	barr->data[word] |= ((t_int_ws)1 << (WORD_SIZE - 1 - bit));
}
