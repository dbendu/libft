/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private_get_buf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:29:17 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/06 19:29:53 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private_buf.h"

t_buf				**get_buf(void)
{
	static t_buf	*buf = NULL;

	return (&buf);
}
