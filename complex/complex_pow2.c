#include "ft_complex.h"

t_complex		complex_pow2(t_complex c)
{
	t_complex	res;
	long double	re;
	long double	im;

	re = c.re;
	im = c.im;

	res.re = re * re - im * im;
	res.im = 2 * re * im;
	return (res);
}
