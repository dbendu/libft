/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_add_strn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:29:23 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/06 16:25:12 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"
#include "private_buf.h"

void			buf_add_strn(int fd, const char *str, size_t strlen)
{
	t_buf		*buf;

	buf = *get_buf(fd);
	if (strlen < buf->size - buf->pos)
	{
		ft_memcpy(buf->buf + buf->pos, str, strlen);
		buf->pos += strlen;
	}
	else
	{
		buf_flush(fd);
		if (strlen > buf->size * 0.75)
		{
			write(buf->fd, str, strlen);
			buf->printed += strlen;
		}
		else
		{
			ft_memcpy(buf->buf, str, strlen);
			buf->pos += strlen;
		}
	}
}
