/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:17:15 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/29 16:12:53 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "ft_memory.h"

void			*ft_memcpy(void *restrict dstptr,
							const void *restrict srcptr,
							size_t bytes)
{
	const t_byte	*src = (t_byte*)srcptr;
	t_byte			*dst;

	dst = (t_byte*)dstptr;
	while (bytes)
	{
		*dst = *src;
		dst += 1;
		src += 1;
		bytes -= 1;
	}
	return (dstptr);
}
