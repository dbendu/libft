/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr_add_chr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 02:23:37 by user              #+#    #+#             */
/*   Updated: 2020/06/01 12:44:00 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dyn_string.h"
#include "dstring_private.h"

void	dstr_add_chr(char **str, char symbol)
{
	t_dstr	*dstr;

	dstr = (t_dstr*)((void*)*str - sizeof(t_dstr));
	if (!dstr->capacity)
	{
		dstr = dstr_expand(dstr, dstr->len + 1);
		*str = dstr->str;
	}
	dstr->str[dstr->len] = symbol;
	dstr->len += 1;
	dstr->capacity -= 1;
	dstr->str[dstr->len] = '\0';
}
