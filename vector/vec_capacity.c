/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_capacity.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:45 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 14:31:04 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

#ifdef SAFE_MODE

size_t				vec_capacity(void *vecptr)
{
	if (!vecptr)
		ft_error("invalid param \"vecptr\": cannot be NULL)",
				"vec_copy", 0);
	return ((t_vector*)(*(void**)vecptr - sizeof(t_vector)))->capacity;
}

#else

inline size_t		vec_capacity(void *vecptr)
{
	return ((t_vector*)(*(void**)vecptr - sizeof(t_vector)))->capacity;
}

#endif
