/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstring_private.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 01:22:30 by user              #+#    #+#             */
/*   Updated: 2020/06/01 12:38:02 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DSTRING_PIRVATE_H
#define DSTRING_PIRVATE_H

#include <stdlib.h>
#include "ft_memory.h"
#include "ft_string.h"

#define PEACE_SIZE	16
#define ALIGN_MASK	(PEACE_SIZE - 1)

typedef struct	s_dstr
{
	int			len;
	int			capacity;
	char		*str;
}				t_dstr;

t_dstr			*dstr_expand(t_dstr *old, int need);
int				dstr_align(int bytes);

#endif
