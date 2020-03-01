#ifndef FT_TYPEDEFS_H
# define FT_TYPEDEFS_H

# include <stdint.h>
# include <stddef.h>

# define WORD_SIZE			__WORDSIZE

# if WORD_SIZE == 64

typedef uint_fast64_t		t_int_ws;
#  define WORD_SIZE_BYTES	8

# else

typedef uint_fast32_t		t_int_ws;
#  define WORD_SIZE_BYTES	4

# endif


typedef unsigned long		t_ul;
typedef unsigned long long	t_ull;
typedef unsigned char		t_bool;

# define TRUE				(1)
# define FALSE				(0)

#endif
