/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_reserve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:43 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/06 20:02:42 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

void			vec_reserve(void *vecptr, size_t elems)
{
	t_vector	*vector;
	size_t		total_cells;

	vector = *(void**)vecptr - sizeof(t_vector);
	total_cells = vector->capacity + vector->size;
	vector->size = elems;
	vector->capacity = total_cells - elems;
}
