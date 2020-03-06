/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_typesize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:42 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/06 19:31:42 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

inline size_t		vec_typesize(void *vecptr)
{
	return ((t_vector*)(*(void**)vecptr - sizeof(t_vector)))->typesize;
}
