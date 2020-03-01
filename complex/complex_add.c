#include "ft_complex.h"

t_complex		complex_add(t_complex c1, t_complex c2)
{
	t_complex	res;

	res.re = c1.re - c2.re;
	res.im = c1.im - c2.im;
	return (res);
}
