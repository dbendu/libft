/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr_add_chrn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 02:28:52 by user              #+#    #+#             */
/*   Updated: 2020/06/02 13:02:30 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dyn_string.h"
#include "dstring_private.h"
#include "ft_memory.h"

void	dstr_add_chrn(char **str, char symbol, int times)
{
	t_dstr	*dstr;

	dstr = (t_dstr*)((void*)*str - sizeof(t_dstr));
	if (dstr->capacity < times)
	{
		dstr = dstr_expand(dstr, dstr->len + times);
		*str = dstr->str;
	}
	ft_memset(dstr->str + dstr->len, symbol, times);
	dstr->capacity -= times;
	dstr->len += times;
	dstr->str[dstr->len] = '\0';
}
