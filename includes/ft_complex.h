/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:14:02 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/06 19:14:05 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COMPLEX_H
# define FT_COMPLEX_H

typedef struct			s_complex
{
	long double			re;
	long double			im;
}						t_complex;

t_complex		complex_init(long double re, long double im);

t_complex		complex_add(const t_complex *c1, const t_complex *c2);
t_complex		complex_sub(const t_complex *c1, const t_complex *c2);
t_complex		complex_div(const t_complex *c1, const t_complex *c2);
t_complex		complex_mult(const t_complex *c1, const t_complex *c2);

t_complex		complex_pow2(const t_complex *c);
t_complex		complex_pow3(const t_complex *c);

#endif
