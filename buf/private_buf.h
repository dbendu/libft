/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private_buf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:29:19 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 12:45:25 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRIVATE_BUF_H
# define PRIVATE_BUF_H

# include "ft_buf.h"

# define DEFAULT_BUFSIZE		4096

typedef struct			s_buf
{
	size_t				size;
	size_t				pos;
	size_t				printed;
	int					fd;
	char				*buf;
}						t_buf;

t_buf					**get_buf(void);

#endif
