/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_flush_to.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:29:22 by dbendu            #+#    #+#             */
/*   Updated: 2020/04/12 14:10:17 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"
#include "private_buf.h"

#ifdef SAFE_MODE

void			buf_flush_to(int from_fd, int to_fd)
{
	t_buf		*buf;

	buf = *get_buf(from_fd);
	if (!buf)
		ft_error("buf was not allocated", "buf_flush_to", 0);
	if (buf->pos)
	{
		write(to_fd, buf->buf, buf->pos);
		buf->printed += buf->pos;
		buf->pos = 0;
	}
}

#else

void			buf_flush_to(int from_fd, int to_fd)
{
	t_buf		*buf;

	buf = *get_buf(from_fd);
	if (buf->pos)
	{
		write(to_fd, buf->buf, buf->pos);
		buf->printed += buf->pos;
		buf->pos = 0;
	}
}

#endif
