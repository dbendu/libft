/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 22:13:16 by user              #+#    #+#             */
/*   Updated: 2020/06/02 22:15:54 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_dyn_string.h"
#include "dstring_private.h"
#include "ft_memory.h"

char	*dstr_to_str(char *dstr)
{
	t_dstr	*dstring;
	char	*str;

	dstring = (t_dstr*)(dstr - sizeof(t_dstr));
	str = malloc(dstring->len + 1);
	ft_memcpy(str, dstring->str, dstring->len + 1);
	free(dstring);
	return (str);
}
