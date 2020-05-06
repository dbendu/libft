/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_reserve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:43 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/06 16:23:51 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

void			vec_reserve(t_vector vector, int elems)
{
	t_vector_s	*vec;
	int			total_cells;

	vec = *(void**)vector - sizeof(t_vector_s);
	total_cells = vec->capacity + vec->size;
	vec->size = elems;
	vec->capacity = total_cells - elems;
}
