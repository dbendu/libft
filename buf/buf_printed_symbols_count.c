/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_printed_symbols_count.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 23:30:44 by user              #+#    #+#             */
/*   Updated: 2020/03/07 12:32:34 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"
#include "private_buf.h"

#ifdef SAFE_MODE

size_t			buf_printed_symbols_count(void)
{
	t_buf		*buf;

	buf = *get_buf();
	if (!buf)
		ft_error("buf doesn\'t created", "buf_printed_symbols_count", 0);
	return (buf->printed);
}

#else

size_t			buf_printed_symbols_count(void)
{
	t_buf		*buf;

	buf = *get_buf();
	return (buf->printed);
}

#endif
