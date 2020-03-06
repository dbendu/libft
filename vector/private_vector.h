/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private_vector.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:31:45 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/06 19:31:45 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRIVATE_VECTOR_H
# define PRIVATE_VECTOR_H

# include "ft_vector.h"

typedef struct			s_vector
{
	size_t				size;
	size_t				capacity;
	size_t				typesize;
	void				*data;
}						t_vector;

#endif
