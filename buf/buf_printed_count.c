/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_printed_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 23:30:44 by user              #+#    #+#             */
/*   Updated: 2020/03/08 12:37:23 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"
#include "private_buf.h"

#ifdef SAFE_MODE

size_t			buf_printed_count(void)
{
	t_buf		*buf;

	buf = *get_buf();
	if (!buf)
		ft_error("buf doesn\'t created", "buf_printed_count", 0);
	return (buf->printed);
}

#else

inline size_t	buf_printed_count(void)
{
	return ((*get_buf())->printed);
}

#endif
