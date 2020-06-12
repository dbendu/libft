/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr_copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 15:50:00 by user              #+#    #+#             */
/*   Updated: 2020/06/12 15:50:01 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "ft_dyn_string.h"
#include "dstring_private.h"
#include "ft_memory.h"

t_dstr	dstr_copy(t_dstr str)
{
	t_dstring	*src;
	t_dstring	*new_str;
	size_t		copy;

	src = (t_dstring*)(str - sizeof(t_dstring));
	copy = sizeof(t_dstring) + src->len + src->capacity + 1;
	new_str = malloc(copy);
	new_str->len = src->len;
	new_str->capacity = src->capacity;
	new_str->str = (char*)(new_str + 1);
	ft_memcpy(new_str->str, src->str, src->len + 1);
	return (new_str->str);
}
