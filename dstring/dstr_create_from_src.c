/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr_create_from_src.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 01:27:55 by user              #+#    #+#             */
/*   Updated: 2020/06/02 13:06:19 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_dyn_string.h"
#include "dstring_private.h"
#include "ft_memory.h"
#include "ft_string.h"

char	*dstr_create_from_src(const char *src)
{
	const size_t	srclen = ft_strlen(src);
	size_t			datasize;
	t_dstr			*dstr;

	datasize = dstr_align(srclen);
	dstr = malloc(sizeof(t_dstr) + datasize + 1);
	dstr->capacity = datasize - srclen;
	dstr->len = srclen;
	dstr->str = (char*)(dstr + 1);
	ft_memcpy(dstr->str, src, srclen + 1);
	return (dstr->str);
}
