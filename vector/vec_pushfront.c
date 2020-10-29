/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_pushfront.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:49:22 by user              #+#    #+#             */
/*   Updated: 2020/10/29 15:04:16 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

static t_vector_s	*vec_expand(t_vector_s *vector)
{
	t_vector_s		*new_vector;
	size_t			new_datasize;

	if (vector->size < 64)
		new_datasize = vector->size + 16;
	else
		new_datasize = vector->size * VEC_INCREASE;
	new_vector = vec_create(new_datasize,
							vector->typesize) - sizeof(t_vector_s);
	new_vector->size = vector->size;
	new_vector->capacity = new_datasize - vector->size;
	ft_memcpy(new_vector->data + vector->typesize,
			vector->data,
			vector->size * vector->typesize);
	free(vector);
	return (new_vector);
}

#ifdef SAFE_MODE

void				vec_pushfront(t_vector vector, void *elem)
{
	t_vector_s		*vec;

	if (!vector)
		ft_error("invalid param \"vecptr\": cannot be NULL)",
				"vec_pushback", 0);
	if (!elem)
		ft_error("invalid param \"elem\": cannot be NULL)",
				"vec_pushback", 0);
	vec = *(void**)vector - sizeof(t_vector_s);
	if (!vec->capacity)
	{
		vec = vec_expand(vec);
		*(void**)vector = vec->data;
	}
	else
		ft_memmove(vec->data + vec->typesize,
					vec->data,
					vec->size * vec->typesize);
	ft_memcpy(vec->data, elem, vec->typesize);
	++vec->size;
	--vec->capacity;
}

#else

void				vec_pushfront(t_vector vector, void *elem)
{
	t_vector_s		*vec;

	vec = *(void**)vector - sizeof(t_vector_s);
	if (!vec->capacity)
	{
		vec = vec_expand(vec);
		*(void**)vector = vec->data;
	}
	else
		ft_memmove(vec->data + vec->typesize,
					vec->data,
					vec->size * vec->typesize);
	ft_memcpy(vec->data, elem, vec->typesize);
	++vec->size;
	--vec->capacity;
}

#endif
