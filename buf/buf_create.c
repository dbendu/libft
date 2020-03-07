/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:29:23 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 12:31:29 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_buf.h"
#include "private_buf.h"

#ifdef SAFE_MODE

void			buf_create(int fd, size_t size)
{
	t_buf		**buf;

	if (fd < 0)
		ft_error("invalid param \"fd\": cannot be less than 0",
				"buf_create", 0);
	buf = get_buf();
	if (!size)
		size = DEFAULT_BUFSIZE;
	if (*buf)
		ft_error("buf already allocate",
				"buf_create", 0);
	*buf = malloc(sizeof(t_buf) + size);
	if (!buf)
		ft_error("can\'t allocate buffer", "buf_init", 0);
	(*buf)->size = size;
	(*buf)->pos = 0;
	(*buf)->fd = fd;
	(*buf)->printed = 0;
	(*buf)->buf = (void*)*buf + sizeof(t_buf);
}

#else

void			buf_create(int fd, size_t size)
{
	t_buf		**buf;

	buf = get_buf();
	if (!size)
		size = DEFAULT_BUFSIZE;
	*buf = malloc(sizeof(t_buf) + size);
	if (!buf)
		ft_error("can\'t allocate buffer", "buf_init", 0);
	(*buf)->size = size;
	(*buf)->pos = 0;
	(*buf)->fd = fd;
	(*buf)->printed = 0;
	(*buf)->buf = (void*)*buf + sizeof(t_buf);
}

#endif
