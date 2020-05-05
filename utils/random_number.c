/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 18:11:32 by user              #+#    #+#             */
/*   Updated: 2020/05/05 18:12:16 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	random_number(int begin, int end)
{
	const int	range = end - begin;
	int			ret;

	ret = rand() % range;
	return (ret + begin);
}
