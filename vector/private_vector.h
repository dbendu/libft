/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private_vector.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:45 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/28 13:28:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRIVATE_VECTOR_H
# define PRIVATE_VECTOR_H

# include "ft_vector.h"

# define VEC_INCREASE	(1.5)

typedef struct			s_vector
{
	int					size;
	int					capacity;
	int					typesize;
	void				*end;
}						t_vector_s;

#endif
