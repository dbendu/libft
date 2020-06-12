/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private_dstr_align.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 01:55:06 by user              #+#    #+#             */
/*   Updated: 2020/06/12 15:50:25 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dstring_private.h"

/*
** works only with powers of 2!!
*/

inline int	dstr_align(int bytes)
{
	return (bytes | (PEACE_SIZE - 1));
}
