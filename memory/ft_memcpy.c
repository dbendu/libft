/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:17:15 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/20 15:42:23 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "ft_memory.h"

void			*ft_memcpy(void *restrict dstptr,
							const void *restrict srcptr,
							size_t bytes)
{
	unsigned char *restrict	dst;
	unsigned char *restrict	src;

	dst = (unsigned char *restrict)dstptr;
	src = (unsigned char *restrict)srcptr;
	while (bytes)
	{
		*dst = *src;
		dst += 1;
		src += 1;
		bytes -= 1;
	}

	return (dst);
}
