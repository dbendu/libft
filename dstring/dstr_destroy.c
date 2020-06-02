/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 01:34:08 by user              #+#    #+#             */
/*   Updated: 2020/06/02 13:00:39 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_dyn_string.h"
#include "dstring_private.h"

inline void	dstr_destroy(char *str)
{
	free(str - sizeof(t_dstr));
}
