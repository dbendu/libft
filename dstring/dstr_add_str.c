/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr_add_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 01:48:55 by user              #+#    #+#             */
/*   Updated: 2020/06/02 13:03:36 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dyn_string.h"
#include "dstring_private.h"
#include "ft_memory.h"
#include "ft_string.h"

void	dstr_add_str(char **str, const char *append)
{
	const int	applen = ft_strlen(append);
	t_dstr		*dstr;

	dstr = (t_dstr*)((void*)*str - sizeof(t_dstr));
	if (applen > dstr->capacity)
	{
		dstr = dstr_expand(dstr, dstr->len + applen);
		*str = dstr->str;
	}
	ft_memcpy(dstr->str + dstr->len, append, applen + 1);
	dstr->len += applen;
	dstr->capacity -= applen;
}
