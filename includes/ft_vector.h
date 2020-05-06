/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 12:29:23 by user              #+#    #+#             */
/*   Updated: 2020/05/06 16:32:41 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# include <stdlib.h>
# include "ft_types.h"
# include "ft_utils.h"
# include "ft_memory.h"

t_vector	vec_create(int elems, int type_size);
void		vec_destroy(t_vector vecptr);

void		vec_pushback(t_vector vecptr, void *elem);
void		vec_popback(t_vector vector);

t_vector	vec_copy(const t_vector vecptr, bool save_capacity);
void		vec_shrink_to_fit(t_vector vecptr);
void		vec_reserve(t_vector vecptr, int size);

int			vec_size(const t_vector vecptr);
int			vec_capacity(const t_vector vecptr);
int			vec_typesize(const t_vector vecptr);

#endif
