/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:44 by dbendu            #+#    #+#             */
/*   Updated: 2020/06/01 13:06:57 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

t_vector	vec_create(int elems, int type_size)
{
	t_vector_s	*vector;

	vector = malloc(sizeof(t_vector_s) + elems * type_size);
	if (!vector)
		return (NULL);
	vector->size = 0;
	vector->capacity = elems;
	vector->typesize = type_size;
	vector->end = vector + 1;
	return (vector + 1);
}
