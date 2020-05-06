/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:29:22 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/06 16:24:05 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_buf.h"
#include "private_buf.h"

size_t			buf_destroy(int fd)
{
	t_buf		**buf;
	size_t		printed_symbols;

	buf = get_buf(fd);
	printed_symbols = (*buf)->printed;
	free(*buf);
	*buf = NULL;
	return (printed_symbols);
}
