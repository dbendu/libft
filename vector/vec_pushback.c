/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_pushback.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:43 by dbendu            #+#    #+#             */
/*   Updated: 2020/06/01 01:24:11 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

static t_vector_s		*vec_expand(t_vector_s *old)
{
	t_vector_s		*new;
	int				elems;

	if (old->size < 64)
		elems = old->size + 16;
	else
		elems = old->size * VEC_INCREASE;
	new = malloc(sizeof(t_vector_s) + elems * old->typesize);
	new->size = old->size;
	new->typesize = old->typesize;
	new->capacity = elems - old->size;
	ft_memcpy(new + 1, old + 1, old->size * old->typesize);
	new->end = (void*)new + sizeof(t_vector_s) + old->size * old->typesize;
	free(old);
	return (new);
}

void					vec_pushback(t_vector vector, void *elem)
{
	t_vector_s		*vec;

	vec = *(void**)vector - sizeof(t_vector_s);
	if (!vec->capacity)
	{
		vec = vec_expand(vec);
		*(void**)vector = vec + 1;
	}
	ft_memcpy(vec->end, elem, vec->typesize);
	vec->end += vec->typesize;
	++vec->size;
	--vec->capacity;
}
