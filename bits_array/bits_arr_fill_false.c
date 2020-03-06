/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits_arr_fill_false.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 17:06:42 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/06 17:06:42 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bits_arr.h"
#include "private_bits_array.h"

#ifdef SAFE_MODE

void			barr_fill_false(t_barr *arr)
{
	size_t		iter;

	if (!arr)
		ft_error("invalid param \"arr\": NULL", "barr_fill_truth", 0);
	iter = 0;
	while (iter < arr->size_in_int_ws)
	{
		arr->data[iter] = 0;
		++iter;
	}
}

#else

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

#endif
