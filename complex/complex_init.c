#include "ft_complex.h"

t_complex		complex_init(long double re, long double im)
{
	t_complex	complex;

	complex.re = re;
	complex.im = im;
	return (complex);
}
