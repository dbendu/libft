/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:34:29 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/06 16:30:01 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void			*matrix_copy(t_matrix matrix)
{
	t_matrix_sizet	m;
	t_matrix_sizet	new_matrix;
	size_t			rows;
	size_t			iter;

	m = *(t_matrix_sizet*)matrix;
	rows = vec_size(&m);
	new_matrix = vec_create(rows, sizeof(void*));
	vec_reserve(&new_matrix, rows);
	iter = 0;
	while (iter < rows)
	{
		new_matrix[iter] = vec_copy(&m[iter], 0);
		++iter;
	}
	return (new_matrix);
}
