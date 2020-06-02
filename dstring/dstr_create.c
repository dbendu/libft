/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr_create.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 01:26:28 by user              #+#    #+#             */
/*   Updated: 2020/06/02 13:00:24 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_dyn_string.h"
#include "dstring_private.h"

char	*dstr_create(int bytes)
{
	t_dstr	*dstr;

	bytes = dstr_align(bytes);
	dstr = malloc(sizeof(t_dstr) + bytes + 1);
	dstr->capacity = bytes;
	dstr->len = 0;
	dstr->str = (char*)(dstr + 1);
	dstr->str[0] = '\0';
	return (dstr->str);
}
