/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_add_col.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:34:28 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 14:08:29 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

#ifdef SAFE_MODE

void			matrix_add_col(void *matrixptr)
{
	size_t		**matrix;
	size_t		rows;
	size_t		iter;
	char		plug[vec_typesize(&(*(size_t***)matrixptr)[0])];

	matrix = *(size_t***)matrixptr;
	rows = vec_size(matrixptr);
	iter = 0;
	while (iter < rows)
	{
		vec_pushback(&matrix[iter], plug);
		++iter;
	}
}

#else

void			matrix_add_col(void *matrixptr)
{
	size_t		**matrix;
	size_t		rows;
	size_t		iter;
	char		plug[vec_typesize(&(*(size_t***)matrixptr)[0])];

	matrix = *(size_t***)matrixptr;
	rows = vec_size(matrixptr);
	iter = 0;
	while (iter < rows)
	{
		vec_pushback(&matrix[iter], plug);
		++iter;
	}
}

#endif
