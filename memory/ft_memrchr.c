/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 21:32:07 by user              #+#    #+#             */
/*   Updated: 2020/02/10 14:02:37 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_memrchr(const void *memptr, int val, size_t num)
{
	register unsigned char	*str;
	unsigned char			*mem;
	unsigned char			_val;

	mem = (unsigned char*)memptr;
	str = (unsigned char*)(memptr + num - 1);
	_val = (unsigned char)val;
	while (str >= mem)
	{
		if (*str == _val)
			return (str);
		--str;
	}
	return (NULL);
}
