/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_popback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 11:59:29 by user              #+#    #+#             */
/*   Updated: 2020/05/28 13:44:57 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

void	vec_popback(t_vector vector)
{
	t_vector_s	*vec;

	vec = *(void**)vector - sizeof(t_vector_s);
	if (vec->size)
	{
		vec->size -= 1;
		vec->end -= vec->typesize;
	}
}
