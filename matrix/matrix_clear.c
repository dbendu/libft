/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:34:29 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/06 21:34:29 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void			matrix_clear(void *matrixptr)
{
	size_t		**matrix;
	size_t		rows;
	size_t		cols;
	size_t		iter;
	size_t		typesize;

	matrix = *(size_t***)matrixptr;
	rows = matrix_rows(&matrix);
	cols = matrix_cols(&matrix);
	typesize = vec_typesize(&matrix[0]);
	iter = 0;
	while (iter < rows)
	{
		ft_memset(matrix[iter], 0, typesize * cols);
		++iter;
	}
}
