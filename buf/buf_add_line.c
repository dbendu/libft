/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_add_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 02:19:34 by dbendu            #+#    #+#             */
/*   Updated: 2020/05/06 16:28:25 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"
#include "private_buf.h"

inline void		buf_add_line(int fd, char *str)
{
	buf_add_str(fd, str);
	buf_add_chr(fd, '\n', 1);
}
