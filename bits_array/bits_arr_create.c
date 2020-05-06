/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits_arr_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 17:06:49 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/06 16:20:59 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bits_arr.h"
#include "private_bits_array.h"

t_barr			*barr_create(size_t bits)
{
	t_barr		*barr;

	barr = malloc(sizeof(t_barr));
	if (!barr)
		return (NULL);
	barr->size_in_bits = bits;
	barr->size_in_int_ws = bits / WORD_SIZE + ((bits & (WORD_SIZE - 1)) != 0);
	barr->data = malloc(barr->size_in_int_ws * sizeof(t_int_ws));
	if (!barr->data)
	{
		free(barr);
		return (NULL);
	}
	ft_memset(barr->data, 0, barr->size_in_int_ws * sizeof(t_int_ws));
	return (barr);
}
