/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:29:21 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 13:07:50 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"
#include "private_buf.h"

#ifdef SAFE_MODE

char		*buf_get(size_t *symbols_in_buf)
{
	t_buf	**buf;

	buf = get_buf();
	if (!*buf)
		ft_error("buf was not allocated", "buf_get", 0);
	if (symbols_in_buf)
		*symbols_in_buf = (*buf)->pos;
	return ((*buf)->buf);
}

#else

char		*buf_get(size_t *symbols_in_buf)
{
	t_buf	**buf;

	buf = get_buf();
	if (symbols_in_buf)
		*symbols_in_buf = (*buf)->pos;
	return ((*buf)->buf);
}

#endif
