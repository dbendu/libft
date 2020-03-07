/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizeof_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:30:31 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:31:26 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

size_t	sizeof_num(int64_t num, unsigned base)
{
	size_t size;

	if (!num)
		return (1);
	if (num == INT64_MIN)
		return (19);
	if (base == 10 && num < 0)
		num = -num;
	size = 0;
	while (num)
	{
		++size;
		num /= base;
	}
	return (size);
}
