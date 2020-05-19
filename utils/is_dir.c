/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dir.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 14:06:52 by user              #+#    #+#             */
/*   Updated: 2020/05/19 14:07:14 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include "ft_utils.h"

bool	is_dir(const char *filename)
{
	struct stat	statbuf;

	if (stat(filename, &statbuf) != 0)
		return (false);
	if (S_ISDIR(statbuf.st_mode))
		return (true);
	else
		return (false);
}
