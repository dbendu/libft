/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memitoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:18:02 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:20:08 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

char	*ft_memitoa(int64_t num, char *str, unsigned base, unsigned is_upper)
{
	const char	*alphabet = is_upper ? "0123456789ABCDEF" : "0123456789abcdef";
	char		*iter;
	size_t		numsize;

	if (num == INT64_MIN)
		return (ft_strdup("-9223372036854775808"));
	numsize = sizeof_num(num, base);
	if (!str)
		str = malloc(numsize + (num < 0) + 1);
	iter = str + numsize + (num < 0);
	*iter-- = '\0';
	if (base == 10 && num < 0)
	{
		*str = '-';
		num = -num;
	}
	if (!num)
		*iter = '0';
	while (num)
	{
		*iter-- = alphabet[num % base];
		num /= base;
	}
	return (str);
}
