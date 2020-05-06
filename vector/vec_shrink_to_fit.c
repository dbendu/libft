/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_shrink_to_fit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:32:55 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/06 16:33:57 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

void			vec_shrink_to_fit(t_vector vector)
{
	t_vector	new_vector;

	if (vec_capacity(vector))
	{
		new_vector = vec_copy(vector, 0);
		vec_destroy(vector);
		*(void**)vector = new_vector;
	}
}
