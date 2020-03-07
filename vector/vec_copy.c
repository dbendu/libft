/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_copy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:44 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 14:29:49 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

#ifdef SAFE_MODE

void			*vec_copy(void *vecptr, t_bool save_capacity)
{
	t_vector	*vector;
	t_vector	*new_vector;
	size_t		new_size;

	if (!vecptr)
		ft_error("invalid param \"vecptr\": cannot be NULL)",
				"vec_copy", 0);
	vector = *(void**)vecptr - sizeof(t_vector);
	new_size = vector->size;
	if (save_capacity)
		new_size += vector->capacity;
	new_vector = vec_create(new_size, vector->typesize) - sizeof(t_vector);
	new_vector->size = vector->size;
	new_vector->capacity = new_size - vector->size;
	new_vector->data = (void*)new_vector + sizeof(t_vector);
	ft_memcpy(new_vector->data, vector->data, vector->size * vector->typesize);
	return (new_vector->data);
}

#else

void			*vec_copy(void *vecptr, t_bool save_capacity)
{
	t_vector	*vector;
	t_vector	*new_vector;
	size_t		new_size;

	vector = *(void**)vecptr - sizeof(t_vector);
	new_size = vector->size;
	if (save_capacity)
		new_size += vector->capacity;
	new_vector = vec_create(new_size, vector->typesize) - sizeof(t_vector);
	new_vector->size = vector->size;
	new_vector->capacity = new_size - vector->size;
	new_vector->data = (void*)new_vector + sizeof(t_vector);
	ft_memcpy(new_vector->data, vector->data, vector->size * vector->typesize);
	return (new_vector->data);
}

#endif
