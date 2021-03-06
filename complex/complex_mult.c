/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_mult.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:14:20 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/06 19:14:37 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_complex.h"

t_complex		complex_mult(const t_complex *c1, const t_complex *c2)
{
	t_complex	res;

	res.re = c1->re * c2->re - c1->im * c2->im;
	res.im = c1->re * c2->im + c2->re * c1->im;
	return (res);
}
