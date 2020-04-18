/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sstream_skip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 19:44:51 by user              #+#    #+#             */
/*   Updated: 2020/04/17 21:22:35 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream.h"

void	sstream_skip(t_stringstream *ss, size_t symbols)
{
	if (ss->is_empty == FALSE)
	{
		ss->pos += symbols;
		if (ss->pos >= ss->strlen)
		{
			free(ss->str);
			ss->str = NULL;
			ss->is_empty = TRUE;
		}
	}
}
