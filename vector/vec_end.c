/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_end.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 13:20:29 by user              #+#    #+#             */
/*   Updated: 2020/05/28 13:45:21 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

inline t_vector	vec_end(t_vector vector)
{
	return ((t_vector_s*)(*(void**)vector - sizeof(t_vector_s)))->end;
}
