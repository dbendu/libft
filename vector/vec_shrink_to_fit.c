/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_shrink_to_fit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:32:55 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/06 19:31:43 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "private_vector.h"

void			vec_shrink_to_fit(void *vecptr)
{
	void		*new_vector;

	if (vec_capacity(vecptr))
	{
		new_vector = vec_copy(vecptr, 0);
		vec_destroy(vecptr);
		*(void**)vecptr = new_vector;
	}
}
