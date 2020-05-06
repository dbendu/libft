/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:29:21 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/06 16:28:16 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"
#include "private_buf.h"

char		*buf_get(int fd, size_t *symbols_in_buf)
{
	t_buf	**buf;

	buf = get_buf(fd);
	if (symbols_in_buf)
		*symbols_in_buf = (*buf)->pos;
	return ((*buf)->buf);
}
