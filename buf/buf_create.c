/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:29:23 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/06 16:28:05 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_buf.h"
#include "private_buf.h"

void		buf_create(int fd, size_t bufsize)
{
	t_buf	**buf;

	buf = get_buf(fd);
	if (!bufsize)
		bufsize = DEFAULT_BUFSIZE;
	*buf = malloc(sizeof(t_buf) + bufsize);
	if (!buf)
		ft_error("can\'t allocate buffer", "buf_init", 0);
	(*buf)->size = bufsize;
	(*buf)->pos = 0;
	(*buf)->fd = fd;
	(*buf)->printed = 0;
	(*buf)->buf = (void*)*buf + sizeof(t_buf);
}
