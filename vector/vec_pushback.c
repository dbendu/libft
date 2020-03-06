/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_pushback.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:43 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/06 19:31:44 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

static t_vector		*vec_expand(t_vector *vector)
{
	t_vector		*new_vector;
	size_t			new_datasize;

	if (vector->size < 64)
		new_datasize = vector->size + 16;
	else
		new_datasize = vector->size * 1.5;
	new_vector = vec_create(new_datasize, vector->typesize) - sizeof(t_vector);
	new_vector->size = vector->size;
	new_vector->capacity = new_datasize - vector->size;
	ft_memcpy(new_vector->data, vector->data, vector->size * vector->typesize);
	free(vector);
	return (new_vector);
}

void				vec_pushback(void *vecptr, void *elem)
{
	t_vector		*vector;

	vector = *(void**)vecptr - sizeof(t_vector);
	if (!vector->capacity)
	{
		vector = vec_expand(vector);
		*(void**)vecptr = vector->data;
	}
	ft_memcpy(vector->data + vector->size * vector->typesize,
				elem, vector->typesize);
	++vector->size;
	--vector->capacity;
}
