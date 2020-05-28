/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:17:43 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/28 15:18:16 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

static void		set_bytes(void **dstptr, t_byte value, size_t bytes)
{
	t_byte	*dst;

	dst = *(t_byte**)dstptr;
	while (bytes)
	{
		*dst = value;
		dst += 1;
		bytes -= 1;
	}
	*dstptr = dst;
}

static void		set_words(void **dstptr, t_byte value, size_t words)
{
	t_int_ws	*dst;
	t_int_ws	word;
	int			i;

	i = 0;
	while (i < WORD_SIZE_BYTES)
	{
		((char*)&word)[i] = value;
		i += 1;
	}
	dst = *(t_int_ws**)dstptr;
	while (words)
	{
		*dst = word;
		dst += 1;
		words -= 1;
	}
	*dstptr = dst;
}

void			*ft_memset(void *restrict dstptr, int c, size_t bytes)
{
	const size_t	word_sz_bytes = WORD_SIZE_BYTES;
	const t_byte	value = c;
	void			*dst;
	size_t			bytes_;

	dst = dstptr;
	bytes_ = (size_t)dst & (word_sz_bytes - 1);
	if (bytes_)
	{
		set_bytes(&dst, value, word_sz_bytes - bytes_);
		bytes -= word_sz_bytes - bytes_;
	}
	if (bytes > (word_sz_bytes << 2))
	{
		bytes_ = bytes & (~(word_sz_bytes - 1));
		set_words(&dst, value, bytes_ >> WORD_POW2);
		bytes -= bytes_;
	}
	if (bytes)
		set_bytes(&dst, value, bytes);
	return (dstptr);
}
