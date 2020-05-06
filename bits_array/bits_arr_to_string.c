/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits_arr_to_string.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 17:06:44 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/06 16:27:17 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bits_arr.h"
#include "private_bits_array.h"

char			*barr_to_string(t_barr *arr)
{
	char		*bits;

	bits = malloc(arr->size_in_int_ws * WORD_SIZE + 1);
	if (!bits)
		return (NULL);
	convert_to_string(bits, arr->data, arr->size_in_int_ws);
	bits[arr->size_in_bits] = '\0';
	return (bits);
}
