/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_typesize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:42 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/28 10:14:36 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

#ifdef SAFE_MODE

size_t				vec_typesize(t_vector vector)
{
	if (!vector)
		ft_error("invalid param \"vecptr\": cannot be NULL)",
				"vec_typesize", 0);
	return ((t_vector_s*)(*(void**)vector - sizeof(t_vector_s)))->typesize;
}

#else

inline size_t		vec_typesize(t_vector vector)
{
	return ((t_vector_s*)(*(void**)vector - sizeof(t_vector_s)))->typesize;
}

#endif
