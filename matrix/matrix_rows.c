/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_rows.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:34:30 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 14:13:04 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

#ifdef SAFE_MODE

size_t			matrix_rows(void *matrixptr)
{
	if (!matrixptr)
		ft_error("invalid param \"matrixptr\": NULL", "matrix_add_col", 0);
	return (vec_size(matrixptr));
}

#else

inline size_t	matrix_rows(void *matrixptr)
{
	return (vec_size(matrixptr));
}

#endif
