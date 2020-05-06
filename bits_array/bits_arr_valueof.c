/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits_arr_valueof.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 22:25:45 by user              #+#    #+#             */
/*   Updated: 2020/05/06 16:27:22 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bits_arr.h"
#include "private_bits_array.h"

bool			barr_valueof(t_barr *arr, size_t index)
{
	size_t		word;
	uint16_t	bit;
	t_int_ws	mask;

	word = index / WORD_SIZE;
	bit = index & (WORD_SIZE - 1);
	mask = (t_int_ws)1 << (WORD_SIZE - 1 - bit);
	return ((arr->data[word] & mask) ? true : false);
}
