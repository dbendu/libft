#ifndef FT_TYPEDEFS_H
# define FT_TYPEDEFS_H

# include <stdint.h>
# include <stddef.h>

# if __WORDSIZE == 64

#  define WORD_SIZE			64
#  define WORD_SIZE_BYTES	8
#  define T_INT_WS_MAX      18446744073709551615ull
typedef uint_fast64_t		t_int_ws;

# elif __WORDSIZE == 32

#  define WORD_SIZE			32
#  define WORD_SIZE_BYTES	4
#  define T_INT_WS_MAX      4294967295ull
typedef uint_fast32_t		t_int_ws;

# elif __WORDSIZE == 16

#  define WORD_SIZE			16
#  define WORD_SIZE_BYTES	2
#  define T_INT_WS_MAX     65535ull
typedef uint_fast16_t		t_int_ws;

# elif __WORDSIZE == 8

#  define WORD_SIZE			8
#  define WORD_SIZE_BYTES	1
#  define T_INT_WS_MAX     255ull
typedef uint_fast8_t		t_int_ws;

# endif

typedef unsigned long		t_ul;
typedef unsigned long long	t_ull;
typedef unsigned char		t_bool;

# define TRUE				(1)
# define FALSE				(0)

#endif
