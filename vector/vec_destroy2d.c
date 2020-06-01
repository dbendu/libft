/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_destroy2d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 02:24:10 by user              #+#    #+#             */
/*   Updated: 2020/06/02 02:40:27 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

void	vec_destroy2d(t_vector vector)
{
	const int	rows = vec_size(vector);
	int			row;
	char		**vec;

	row = 0;
	vec = *(void**)vector;
	while (row < rows)
	{
		vec_destroy(&vec[row]);
		row += 1;
	}
	vec_destroy(vector);
}
