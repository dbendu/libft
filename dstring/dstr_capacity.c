/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr_capacity.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 02:16:08 by user              #+#    #+#             */
/*   Updated: 2020/06/01 12:41:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dyn_string.h"
#include "dstring_private.h"

inline int	dstr_capacity(const char *str)
{
	return (((t_dstr*)(str - sizeof(t_dstr)))->capacity);
}
