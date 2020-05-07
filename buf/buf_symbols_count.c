/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_sumbols_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 12:55:49 by user              #+#    #+#             */
/*   Updated: 2020/05/07 12:56:51 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"
#include "private_buf.h"

inline size_t	buf_symbols_count(int fd)
{
	const t_buf	*buf = *get_buf(fd);

	return (buf->printed + buf->pos);
}
