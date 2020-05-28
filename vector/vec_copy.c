/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_copy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:44 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/28 13:29:52 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

t_vector		vec_copy(const t_vector vector, bool save_capacity)
{
	t_vector_s	*vec;
	t_vector_s	*new_vector;
	int			datasize;
	int			elems;

	vec = *(void**)vector - sizeof(t_vector_s);
	elems = vec->size;
	if (save_capacity)
		elems += vec->capacity;
	datasize = elems * vec->typesize;
	new_vector = malloc(sizeof(t_vector_s) + datasize);
	new_vector->size = elems;
	new_vector->capacity = elems - vec->size;
	ft_memcpy(new_vector + 1, vec + 1, vec->size * vec->typesize);
	new_vector->end = (void*)new_vector + sizeof(t_vector_s) + datasize;
	return (new_vector + 1);
}
