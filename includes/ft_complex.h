#ifndef FT_COMPLEX_H
# define FT_COMPLEX_H

typedef struct			s_complex
{
	long double			re;
	long double			im;
}						t_complex;

t_complex		complex_init(long double re, long double im);
t_complex		complex_add(t_complex c1, t_complex c2);
t_complex		complex_sub(t_complex c1, t_complex c2);
t_complex		complex_pow2(t_complex c);

#endif
