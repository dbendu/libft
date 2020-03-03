#include "ft_bits_arr.h"
#include "private_bits_array.h"
#include "mode_libft.h"

static void		little_endian(char *str, char *numptr)
{
	int			byte;
	int			bit;

	byte = WORD_SIZE_BYTES - 1;
	while (byte >= 0)
	{
		bit = 7;
		while (bit >= 0)
		{
			*str = ((numptr[byte] >> bit) & 1) + '0';
			++str;
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
			*str = ((numptr[byte] >> bit) & 1) + '0';
			++str;
			--bit;
		}
		++byte;
	}
}

static void		convert(char *str, t_int_ws *data, size_t datalen)
{
	size_t		cur_num;

	cur_num = 0;
	if (bytes_order() == FT_LITTLE_ENDIAN)
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
			big_endian(str, (char*)(data + cur_num));
			str += WORD_SIZE;
			++cur_num;
		}
	}
}

#ifdef XMALLOC_MODE

# ifdef SAFE_MODE

char			*barr_to_string(t_barr *arr)
{
	char		*bits;

	if (!arr)
		ft_error("invalid param \"arr\": NULL", "barr_to_string", 0);
	bits = malloc(arr->size_in_int_ws * WORD_SIZE + 1);
	if (!bits)
		ft_error("can\'t allocate string", "barr_to_string", 0);
	convert(bits, arr->data, arr->size_in_int_ws);
	bits[arr->size_in_bits] = '\0';
	return (bits);
}

# else

char			*barr_to_string(t_barr *arr)
{
	char		*bits;

	bits = malloc(arr->size_in_int_ws * WORD_SIZE + 1);
	if (!bits)
		ft_error("can\'t allocate string", "barr_to_string", 0);
	convert(bits, arr->data, arr->size_in_int_ws);
	bits[arr->size_in_bits] = '\0';
	return (bits);
}

# endif

#else

# ifdef SAFE_MODE

char			*barr_to_string(t_barr *arr)
{
	char		*bits;

	if (!arr)
		ft_error("invalid param \"arr\": NULL", "barr_to_string", 0);
	bits = malloc(arr->size_in_int_ws * WORD_SIZE + 1);
	if (!bits)
		return (NULL);
	convert(bits, arr->data, arr->size_in_int_ws);
	bits[arr->size_in_bits] = '\0';
	return (bits);
}

# else

char			*barr_to_string(t_barr *arr)
{
	char		*bits;

	bits = malloc(arr->size_in_int_ws * WORD_SIZE + 1);
	if (!bits)
		return (NULL);
	convert(bits, arr->data, arr->size_in_int_ws);
	bits[arr->size_in_bits] = '\0';
	return (bits);
}

# endif

#endif
