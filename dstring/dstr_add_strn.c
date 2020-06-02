/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr_add_strn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 02:01:49 by user              #+#    #+#             */
/*   Updated: 2020/06/02 13:01:53 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dyn_string.h"
#include "dstring_private.h"
#include "ft_memory.h"

void	dstr_add_strn(char **str, const char *append, int bytes)
{
	t_dstr		*dstr;

	dstr = (t_dstr*)((void*)*str - sizeof(t_dstr));
	if (bytes > dstr->capacity)
	{
		dstr = dstr_expand(dstr, dstr->len + bytes);
		*str = dstr->str;
	}
	ft_memcpy(dstr->str + dstr->len, append, bytes);
	dstr->len += bytes;
	dstr->capacity -= bytes;
	dstr->str[dstr->len] = '\0';
}
