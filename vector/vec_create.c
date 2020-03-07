/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:44 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 14:31:23 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

#ifdef XMALLOC_MODE

# ifdef SAFE_MODE

void			*vec_create(size_t elems, size_t type_size)
{
	t_vector	*vector;

	if (!elems)
		ft_error("invalid param \"elems\": cannot been 0", "vec_create", 0);
	if (!type_size)
		ft_error("invalid param \"type_size\": cannot been 0", "vec_create", 0);
	vector = malloc(sizeof(t_vector) + elems * type_size);
	if (!vector)
		ft_error("can\'t allocate vector", "vec_create", 0);
	vector->size = 0;
	vector->capacity = elems;
	vector->typesize = type_size;
	vector->data = (void*)vector + sizeof(t_vector);
	return (vector->data);
}

# else

void			*vec_create(size_t elems, size_t type_size)
{
	t_vector	*vector;

	vector = malloc(sizeof(t_vector) + elems * type_size);
	if (!vector)
		ft_error("can\'t allocate vector", "vec_create", 0);
	vector->size = 0;
	vector->capacity = elems;
	vector->typesize = type_size;
	vector->data = (void*)vector + sizeof(t_vector);
	return (vector->data);
}

# endif

#else

# ifdef SAFE_MODE

void			*vec_create(size_t elems, size_t type_size)
{
	t_vector	*vector;

	if (!elems)
		ft_error("invalid param \"elems\": cannot been 0", "vec_create", 0);
	if (!type_size)
		ft_error("invalid param \"type_size\": cannot been 0", "vec_create", 0);
	vector = malloc(sizeof(t_vector) + elems * type_size);
	if (!vector)
		return (NULL);
	vector->size = 0;
	vector->capacity = elems;
	vector->typesize = type_size;
	vector->data = (void*)vector + sizeof(t_vector);
	return (vector->data);
}

# else

void			*vec_create(size_t elems, size_t type_size)
{
	t_vector	*vector;

	vector = malloc(sizeof(t_vector) + elems * type_size);
	if (!vector)
		return (NULL);
	vector->size = 0;
	vector->capacity = elems;
	vector->typesize = type_size;
	vector->data = (void*)vector + sizeof(t_vector);
	return (vector->data);
}

# endif

#endif
