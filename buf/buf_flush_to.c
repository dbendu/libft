/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_flush_to.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:29:22 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 12:40:09 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"
#include "private_buf.h"

#ifdef SAFE_MODE

void			buf_flush_to(int fd)
{
	t_buf		*buf;

	buf = *get_buf();
	if (!buf)
		ft_error("buf was not allocated", "buf_flush_to", 0);
	if (buf->pos)
	{
		write(fd, buf->buf, buf->pos);
		buf->printed += buf->pos;
		buf->pos = 0;
	}
}

#else

void			buf_flush_to(int fd)
{
	t_buf		*buf;

	buf = *get_buf();
	if (buf->pos)
	{
		write(fd, buf->buf, buf->pos);
		buf->printed += buf->pos;
		buf->pos = 0;
	}
}

#endif
