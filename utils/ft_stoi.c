/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 13:33:28 by user              #+#    #+#             */
/*   Updated: 2020/05/29 14:07:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int		ft_stoi(const char *str, size_t *pos, int base)
{
	static const char	alphabet[] = "0123456789abcdef";
	int					res;
	const char			*char_pos;
	size_t				local_pos;

	local_pos = 0;
	if (base == 16 && str[0] == '0' && (str[1] == 'x' || str[1] == 'X'))
	{
		str += 2;
		local_pos += 2;
	}
	res = 0;
	while (true)
	{
		char_pos = ft_memchr(alphabet, ft_tolower(*str), base);
		if (!char_pos)
			break ;
		res = res * base + (char_pos - alphabet);
		str += 1;
		local_pos += 1;
	}
	if (pos)
		*pos = local_pos;
	return (res);
}
