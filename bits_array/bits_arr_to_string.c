#include <stdio.h>
#include "ft_bits_arr.h"
#include "mode_libft.h"

static void		little_endian(char *str, char *numptr)
{
	size_t pos;
	int			byte;
	int			bit;

	pos = 0;
	byte = WORD_SIZE_BYTES - 1;
	while (byte >= 0)
	{
		bit = 7;
		while (bit >= 0)
		{
			str[pos++] = ((numptr[byte] >> bit) & 1) + '0';
			--bit;
		}
		--byte;
	}
}

static void		big_endian(char *str, char *numptr)
{
	int			byte;
	int			bit;

	byte = 0;
	while (byte < 8)
	{
		bit = 7;
		while (bit >= 0)
		{
			*str = ((numptr[byte] >> bit) & 1) + 0;
			++str;
			--bit;
		}
		++byte;
	}
}

static void		convert(char *str, t_int_ws *data, size_t datalen)
{
	int			endian;
	size_t		cur_num;

	endian = bytes_order();
	cur_num = 0;
	if (endian == FT_LITTLE_ENDIAN)
	{
		while (cur_num < datalen)
		{
			little_endian(str, (char*)(data + cur_num));
			str += WORD_SIZE;
			++cur_num;
		}
	}
	else
	{
		while (cur_num < datalen)
		{
			big_endian(str + WORD_SIZE_BYTES + cur_num, (char*)(data + cur_num));
			++cur_num;
		}
	}
}

#ifdef XMALLOC_MODE

char			*barr_to_string(t_barr *barr)
{
	char		*bits;

	if (!barr)
		ft_error("NULL adress", "barr_to_string", 0);
	bits = malloc(barr->size_in_int_ws * WORD_SIZE + 1);
	if (!bits)
		ft_error("can\'t allocate string", "barr_to_string", 0);
	convert(bits, barr->data, barr->size_in_int_ws);
	bits[barr->size_in_bits] = '\0';
	return (bits);
}

#else

char			*barr_to_string(t_barr *barr)
{
	char		*bits;

	if (!barr)
		ft_error("NULL adress", "barr_to_string", 0);
	bits = malloc(barr->size_in_int_ws * sizeof(t_int_ws) +
														barr->size_in_int_ws);
	if (!bits)
		return (NULL);
	convert(bits);
	return (bits);
}

#endif
