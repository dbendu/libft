/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private_dstr_expand.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 01:53:04 by user              #+#    #+#             */
/*   Updated: 2020/06/02 13:01:04 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dstring_private.h"
#include "ft_memory.h"

t_dstr	*dstr_expand(t_dstr *old, int need)
{
	t_dstr	*new;

	need = dstr_align(need);
	new = malloc(sizeof(t_dstr) + need + 1);
	new->len = old->len;
	new->capacity = need - new->len;
	new->str = (char*)(new + 1);
	ft_memcpy(new->str, old->str, old->len + 1);
	free(old);
	return (new);
}
