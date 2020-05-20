/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:17:43 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/20 15:39:52 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void			*ft_memset(void *restrict dest, int c, size_t bytes)
{
	unsigned char *restrict	mem;
	const unsigned char		value = c;

	mem = (unsigned char *restrict)dest;
	while (bytes)
	{
		*mem = value;
		mem += 1;
		bytes -= 1;
	}
	return (dest);
}
