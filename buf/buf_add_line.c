/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_add_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 02:19:34 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 12:43:15 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"
#include "private_buf.h"

#ifdef SAFE_MODE

void			buf_add_line(char *str)
{
	if (!str)
		ft_error("invalid param \"str\": cannot be NULL", "buf_add_line", 0);
	buf_add_str(str);
	buf_add_chr('\n', 1);
}

#else

void			buf_add_line(char *str)
{
	buf_add_str(str);
	buf_add_chr('\n', 1);
}

#endif
