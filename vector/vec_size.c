/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:42 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 14:31:40 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

#ifdef SAFE_MODE

size_t				vec_size(void *vecptr)
{
	if (!vecptr)
		ft_error("invalid param \"vecptr\": cannot be NULL)",
				"vec_size", 0);
	return ((t_vector*)(*(void**)vecptr - sizeof(t_vector)))->size;
}

#else

inline size_t		vec_size(void *vecptr)
{
	return ((t_vector*)(*(void**)vecptr - sizeof(t_vector)))->size;
}

#endif
