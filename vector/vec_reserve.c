/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_reserve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:43 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 14:21:46 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

#ifdef SAFE_MODE

void			vec_reserve(void *vecptr, size_t elems)
{
	t_vector	*vector;
	size_t		total_cells;

	if (!vecptr)
		ft_error("invalid param \"vecptr\": cannot be NULL)",
				"vec_reserve", 0);
	vector = *(void**)vecptr - sizeof(t_vector);
	total_cells = vector->capacity + vector->size;
	if (elems > total_cells)
		ft_error("invalid param \"vecptr\": don\'t have enought memory",
				"vec_reserve", 0);
	vector->size = elems;
	vector->capacity = total_cells - elems;
}

#else

void			vec_reserve(void *vecptr, size_t elems)
{
	t_vector	*vector;
	size_t		total_cells;

	vector = *(void**)vecptr - sizeof(t_vector);
	total_cells = vector->capacity + vector->size;
	vector->size = elems;
	vector->capacity = total_cells - elems;
}

#endif
