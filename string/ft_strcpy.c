/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 13:02:45 by user              #+#    #+#             */
/*   Updated: 2020/05/28 13:04:05 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char *begin;

	begin = dst;
	while (*src)
	{
		*dst = *src;
		dst += 1;
		src += 1;
	}
	*dst = '\0';
	return (begin);
}
