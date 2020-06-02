/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:17:43 by dbendu            #+#    #+#             */
/*   Updated: 2020/06/02 13:03:19 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_types.h"

void			*ft_memset(void *restrict dstptr, int c, size_t bytes)
{
	const t_byte	value = c;
	t_byte			*dst;

	dst = (t_byte*)dstptr;
	while (bytes)
	{
		*dst = value;
		dst += 1;
		bytes -= 1;
	}
	return (dstptr);
}
