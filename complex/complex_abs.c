#include <math.h>
#include "ft_complex.h"

long double		complex_abs(const t_complex *c)
{
	return (sqrt(c->re * c->re + c->im * c->im));
}
