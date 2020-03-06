/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:34:29 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/06 21:34:30 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void			*matrix_copy(void *matrixptr)
{
	size_t		**matrix;
	size_t		**new_matrix;
	size_t		rows;
	size_t		iter;

	matrix = *(size_t***)matrixptr;
	rows = vec_size(&matrix);
	new_matrix = vec_create(rows, sizeof(void*));
	vec_reserve(&new_matrix, rows);
	iter = 0;
	while (iter < rows)
	{
		new_matrix[iter] = vec_copy(&matrix[iter], 0);
		++iter;
	}
	return (new_matrix);
}
