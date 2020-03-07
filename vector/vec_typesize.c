/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_typesize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:42 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 14:31:09 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

#ifdef SAFE_MODE

size_t				vec_typesize(void *vecptr)
{
	if (!vecptr)
		ft_error("invalid param \"vecptr\": cannot be NULL)",
				"vec_typesize", 0);
	return ((t_vector*)(*(void**)vecptr - sizeof(t_vector)))->typesize;
}

#else

inline size_t		vec_typesize(void *vecptr)
{
	return ((t_vector*)(*(void**)vecptr - sizeof(t_vector)))->typesize;
}

#endif
