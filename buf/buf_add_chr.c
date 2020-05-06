/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_add_chr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:29:24 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/06 16:28:01 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"
#include "private_buf.h"

void		buf_add_chr(int fd, char chr, size_t times)
{
	t_buf	*buf;

	buf = *get_buf(fd);
	if (times <= buf->size - buf->pos)
	{
		ft_memset(buf->buf + buf->pos, chr, times);
		buf->pos += times;
	}
	else
	{
		buf_flush(fd);
		ft_memset(buf->buf, chr, ft_min(times, buf->size));
		while (times)
		{
			buf_flush(fd);
			buf->pos = ft_min(times, buf->size);
			times -= buf->pos;
		}
	}
}
