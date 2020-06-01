/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 01:49:59 by user              #+#    #+#             */
/*   Updated: 2020/06/01 12:41:29 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dyn_string.h"
#include "dstring_private.h"

void	dstr_clear(char *str)
{
	t_dstr	*dstr;

	dstr = (t_dstr*)(str - sizeof(t_dstr));
	dstr->str[0] = '\0';
	dstr->capacity += dstr->len;
	dstr->len = 0;
}
