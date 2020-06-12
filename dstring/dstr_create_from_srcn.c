/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr_create_from_srcn.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 01:32:42 by user              #+#    #+#             */
/*   Updated: 2020/06/02 13:01:24 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_dyn_string.h"
#include "dstring_private.h"
#include "ft_memory.h"

t_dstr	dstr_create_from_srcn(const char *src, int bytes)
{
	size_t			datasize;
	t_dstring		*dstr;

	datasize = dstr_align(bytes);
	dstr = malloc(sizeof(t_dstring) + datasize + 1);
	dstr->capacity = datasize - bytes;
	dstr->len = bytes;
	dstr->str = (char*)(dstr + 1);
	ft_memcpy(dstr->str, src, bytes);
	dstr->str[bytes] = '\0';
	return (dstr->str);
}
