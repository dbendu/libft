/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 12:29:23 by user              #+#    #+#             */
/*   Updated: 2020/04/03 12:29:25 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# include <stdlib.h>
# include "ft_types.h"
# include "ft_utils.h"
# include "ft_memory.h"
# include "mode_libft.h"

void		*vec_create(size_t elems, size_t type_size);
void		vec_destroy(t_vector vecptr);

void		vec_pushback(t_vector vecptr, void *elem);
void		*vec_copy(t_vector vecptr, t_bool save_capacity);
void		vec_shrink_to_fit(t_vector vecptr);
void		vec_reserve(t_vector vecptr, size_t size);

size_t		vec_size(t_vector vecptr);
size_t		vec_capacity(t_vector vecptr);
size_t		vec_typesize(t_vector vecptr);

#endif
