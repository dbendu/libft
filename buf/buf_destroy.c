/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:29:22 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 12:59:06 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_buf.h"
#include "private_buf.h"

#ifdef SAFE_MODE

size_t			buf_destroy(void)
{
	t_buf		**buf;
	size_t		printed_symbols;

	buf_flush();
	buf = get_buf();
	if (!*buf)
		ft_error("buf was not allocated", "buf_destroy", 0);
	printed_symbols = (*buf)->printed;
	free(*buf);
	*buf = NULL;
	return (printed_symbols);
}

#else

size_t			buf_destroy(void)
{
	t_buf		**buf;
	size_t		printed_symbols;

	buf_flush();
	buf = get_buf();
	printed_symbols = (*buf)->printed;
	free(*buf);
	*buf = NULL;
	return (printed_symbols);
}

#endif
