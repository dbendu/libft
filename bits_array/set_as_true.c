#include "ft_bits_arr.h"
#include "private_bits_array.h"

#ifdef SAFE_MODE

void		barr_set_as_true(t_barr *arr, size_t bit_index)
{
	size_t		word;
	uint16_t	bit;

	if (!arr)
		ft_error("invalid param \"arr\": NULL", "barr_set_as_false", 0);
	if (bit_index >= arr->size_in_bits)
		ft_error("invalid param \"bit_index\": out of range",
				"barr_set_as_false", 0);
	word = bit_index / WORD_SIZE;
	bit = bit_index & (WORD_SIZE - 1);
	arr->data[word] |= ((t_int_ws)1 << (WORD_SIZE - 1 - bit));
}

#else

void		barr_set_as_true(t_barr *arr, size_t bit_index)
{
	size_t		word;
	uint16_t	bit;

	word = bit_index / WORD_SIZE;
	bit = bit_index & (WORD_SIZE - 1);
	arr->data[word] |= ((t_int_ws)1 << (WORD_SIZE - 1 - bit));
}

#endif
