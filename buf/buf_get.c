/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:29:21 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 12:37:54 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"
#include "private_buf.h"

#ifdef SAFE_MODE

char		*buf_get(size_t *symbols_in_buf)
{
	t_buf	**buf;

	if (!symbols_in_buf)
		ft_error("invalid param \"symbols in buf\": cannot be NULL",
				"buf_get", 0);
	buf = get_buf();
	if (*buf)
	{
		*symbols_in_buf = (*buf)->pos;
		return ((*buf)->buf);
	}
	else
		ft_error("buf was not allocated", "buf_get", 0);
	return (NULL);
}

#else

char		*buf_get(size_t *symbols_in_buf)
{
	t_buf	**buf;

	buf = get_buf();
	*symbols_in_buf = (*buf)->pos;
	return ((*buf)->buf);
}

#endif
