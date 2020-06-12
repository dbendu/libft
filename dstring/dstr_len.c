/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 02:17:22 by user              #+#    #+#             */
/*   Updated: 2020/06/01 12:38:06 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dyn_string.h"
#include "dstring_private.h"

inline int	dstr_len(t_dstr str)
{
	return (((t_dstring*)(str - sizeof(t_dstring)))->len);
}
