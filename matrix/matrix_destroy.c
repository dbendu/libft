/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:34:30 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 14:02:57 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

#ifdef SAFE_MODE

void			matrix_destroy(void *matrixptr)
{
	size_t		iter;
	size_t		rows;
	size_t		**matrix;

	if (!matrixptr)
		ft_error("invalid param \"matrixptr\": NULL", "matrix_destroy", 0);
	matrix = *(size_t***)matrixptr;
	rows = vec_size(&matrix);
	iter = 0;
	while (iter < rows)
	{
		vec_destroy(matrix + iter);
		++iter;
	}
	vec_destroy(&matrix);
}

#else

void			matrix_destroy(void *matrixptr)
{
	size_t		iter;
	size_t		rows;
	size_t		**matrix;

	matrix = *(size_t***)matrixptr;
	rows = vec_size(&matrix);
	iter = 0;
	while (iter < rows)
	{
		vec_destroy(matrix + iter);
		++iter;
	}
	vec_destroy(&matrix);
}

#endif
