/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_reserve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:43 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/28 14:04:25 by user             ###   ########.fr       */
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
	vec->end = (void*)vec + sizeof(t_vector_s) + elems * vec->typesize;
	vec->capacity = total_cells - elems;
}
