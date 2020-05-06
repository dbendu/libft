/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits_arr_fill_false.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 17:06:42 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/06 16:21:18 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bits_arr.h"
#include "private_bits_array.h"

void			barr_fill_false(t_barr *arr)
{
	size_t		iter;

	iter = 0;
	while (iter < arr->size_in_int_ws)
	{
		arr->data[iter] = 0;
		++iter;
	}
}
