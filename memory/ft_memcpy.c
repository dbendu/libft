/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:17:15 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/28 15:05:22 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "ft_memory.h"

static void	copy_bytes(void **dstptr, const void *restrict *srcptr,
						size_t bytes)
{
	t_byte	*dst;
	t_byte	*src;

	dst = *(t_byte**)dstptr;
	src = *(t_byte**)srcptr;
	while (bytes)
	{
		*dst = *src;
		dst += 1;
		src += 1;
		bytes -= 1;
	}
	*dstptr = dst;
	*srcptr = src;
}

static void	copy_words(void **dstptr, const void *restrict *srcptr,
						size_t words)
{
	t_int_ws	*dst;
	t_int_ws	*src;

	dst = *(t_int_ws**)dstptr;
	src = *(t_int_ws**)srcptr;
	while (words)
	{
		*dst = *src;
		dst += 1;
		src += 1;
		words -= 1;
	}
	*dstptr = dst;
	*srcptr = src;
}

void			*ft_memcpy(void *restrict dstptr,
							const void *restrict srcptr,
							size_t bytes)
{
	const size_t	word_sz_bytes = WORD_SIZE_BYTES;
	void			*dst;
	size_t			bytes_;

	dst = dstptr;
	bytes_ = (size_t)dst & (word_sz_bytes - 1);
	if (bytes_)
	{
		copy_bytes(&dst, &srcptr, word_sz_bytes - bytes_);
		bytes -= word_sz_bytes - bytes_;
	}
	if (bytes > (word_sz_bytes << 2))
	{
		bytes_ = bytes & (~(word_sz_bytes - 1));
		copy_words(&dst, &srcptr, bytes_ >> WORD_POW2);
		bytes -= bytes_;
	}
	if (bytes)
		copy_bytes(&dst, &srcptr, bytes);
	return (dstptr);
}
