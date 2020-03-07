/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_add_row.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:34:28 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 14:44:59 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

#ifdef SAFE_MODE

void			matrix_add_row(void *matrixptr)
{
	size_t		**matrix;
	void		*new_row;

	if (!matrixptr)
		ft_error("invalid param \"matrixptr\": NULL", "matrix_add_row", 0);
	matrix = *(size_t***)matrixptr;
	new_row = vec_create(vec_size(&matrix[0]), vec_typesize(&matrix[0]));
	vec_reserve(&new_row, vec_size(&matrix[0]));
	vec_pushback(&matrix, &new_row);
	*(void**)matrixptr = matrix;
}

#else

void			matrix_add_row(void *matrixptr)
{
	size_t		**matrix;
	void		*new_row;

	matrix = *(size_t***)matrixptr;
	new_row = vec_create(vec_size(&matrix[0]), vec_typesize(&matrix[0]));
	vec_reserve(&new_row, vec_size(&matrix[0]));
	vec_pushback(&matrix, &new_row);
	*(void**)matrixptr = matrix;
}

#endif
