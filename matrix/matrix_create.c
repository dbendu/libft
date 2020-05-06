/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:34:30 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/06 16:29:55 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void			*matrix_create(size_t rows, size_t cols, size_t type_size)
{
	t_matrix_sizet	matrix;
	size_t			iter;

	matrix = vec_create(rows, sizeof(t_matrix));
	vec_reserve(&matrix, rows);
	iter = 0;
	while (iter < rows)
	{
		matrix[iter] = vec_create(cols, type_size);
		vec_reserve(&matrix[iter], cols);
		++iter;
	}
	return (matrix);
}
