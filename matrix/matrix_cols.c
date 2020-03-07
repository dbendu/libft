/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_cols.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:34:29 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 14:44:42 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

#ifdef SAFE_MODE

size_t			matrix_cols(void *matrixptr)
{
	if (!matrixptr)
		ft_error("invalid param \"matrixptr\": NULL", "matrix_cols", 0);
	return (vec_size(*(void**)matrixptr));
}

#else

inline size_t	matrix_cols(void *matrixptr)
{
	return (vec_size(*(void**)matrixptr));
}

#endif
