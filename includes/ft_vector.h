/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 12:29:23 by user              #+#    #+#             */
/*   Updated: 2020/06/02 02:25:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# include <stdlib.h>
# include "ft_types.h"
# include "ft_utils.h"
# include "ft_memory.h"

t_vector	vec_create(int elems, int type_size);
void		vec_destroy(t_vector vector);
void		vec_destroy2d(t_vector vector);

void		vec_pushback(t_vector vector, void *elem);
void		vec_popback(t_vector vector);

t_vector	vec_end(t_vector vector);

t_vector	vec_copy(const t_vector vector, bool save_capacity);
void		vec_shrink_to_fit(t_vector vector);
void		vec_reserve(t_vector vector, int size);

int			vec_size(const t_vector vector);
int			vec_capacity(const t_vector vector);
int			vec_typesize(const t_vector vector);

#endif
