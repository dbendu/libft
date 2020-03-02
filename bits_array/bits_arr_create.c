#include "ft_bits_arr.h"
#include "mode_libft.h"

#ifdef XMALLOC_MODE

t_barr			*barr_create(size_t bits)
{
	t_barr		*barr;

	if (!bits)
		ft_error("invalid param: 0 bits", "barr_create", 0);
	barr = malloc(sizeof(t_barr));
	if (!barr)
		ft_error("can\'t allocate bytes array", "barr_create", 0);
	barr->size_in_bits = bits;
	barr->size_in_int_ws = bits / WORD_SIZE + ((bits & (WORD_SIZE - 1)) != 0);
	barr->data = malloc(barr->size_in_int_ws * sizeof(t_int_ws));
	if (!barr->data)
		ft_error("can\'t allocate data in bytes array", "barr_create", 0);
	ft_memset(barr->data, 0, barr->size_in_int_ws * sizeof(t_int_ws));
	return (barr);
}

#else

t_barr			*barr_create(size_t bits)
{
	t_barr		*barr;

	if (!bits)
		ft_error("invalid param: 0 bits", "barr_create", 0);
	barr = malloc(sizeof(t_barr));
	if (!barr)
		return (NULL);
	barr->size_in_bits = bits;
	barr->size_in_int_ws = bits / WORD_SIZE_BYTES + 1;
	barr->data = malloc(barr->size_in_int_ws * sizeof(t_int_ws));
	if (!barr->data)
	{
		free(barr);
		return (NULL);
	}
	ft_memset(barr->data, 0, barr->size_in_int_ws * sizeof(t_int_ws));
	return (barr);
}

#endif