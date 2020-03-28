/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:42 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/28 10:19:46 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

#ifdef SAFE_MODE

size_t				vec_size(t_vector vector)
{
	if (!vector)
		ft_error("invalid param \"vecptr\": cannot be NULL)",
				"vec_size", 0);
	t_vector_s *vec = *(void**)vector - sizeof(t_vector_s);
	return ((t_vector_s*)(*(void**)vector - sizeof(t_vector_s)))->size;
	(void)vec;
}

#else

inline size_t		vec_size(t_vector vector)
{
	return ((t_vector_s*)(*(void**)vector - sizeof(t_vector_s)))->size;
}

#endif
