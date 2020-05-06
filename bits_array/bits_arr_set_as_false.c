/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits_arr_set_as_false.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 17:07:08 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/06 16:27:07 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bits_arr.h"
#include "private_bits_array.h"

void		barr_set_as_false(t_barr *arr, size_t bit_index)
{
	size_t		word;
	uint16_t	bit;
	t_int_ws	mask;

	word = bit_index / WORD_SIZE;
	bit = bit_index & (WORD_SIZE - 1);
	mask = ~((t_int_ws)1 << (WORD_SIZE - 1 - bit));
	arr->data[word] &= mask;
}
