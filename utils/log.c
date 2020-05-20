/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 19:52:56 by user              #+#    #+#             */
/*   Updated: 2020/05/20 14:30:43 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

void	print_log(const char *msg)
{
	write(1, msg, ft_strlen(msg));
	write(1, "\n", 1);
}

void	print_err_log(const char *msg)
{
	write(2, msg, ft_strlen(msg));
	write(2, "\n", 1);
}

void	print_log_fd(const char *msg, int fd)
{
	write(fd, msg, ft_strlen(msg));
	write(fd, "\n", 1);
}
