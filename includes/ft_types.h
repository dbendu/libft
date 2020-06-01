/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_types.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 12:29:27 by user              #+#    #+#             */
/*   Updated: 2020/06/02 02:23:36 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TYPEDEFS_H
# define FT_TYPEDEFS_H

# include <stdint.h>
# include <stddef.h>
# include <stdbool.h>

# if __WORDSIZE == 64

#  define WORD_SIZE			64
#  define WORD_SIZE_BYTES	8
#  define WORD_POW2			3
#  define T_INT_WS_MAX		18446744073709551615ull
typedef uint_fast64_t		t_int_ws;

# elif __WORDSIZE == 32

#  define WORD_SIZE			32
#  define WORD_SIZE_BYTES	4
#  define WORD_POW2			2
#  define T_INT_WS_MAX		4294967295ull
typedef uint_fast32_t		t_int_ws;

# elif __WORDSIZE == 16

#  define WORD_SIZE			16
#  define WORD_SIZE_BYTES	2
#  define WORD_POW2			1
#  define T_INT_WS_MAX		65535ull
typedef uint_fast16_t		t_int_ws;

# elif __WORDSIZE == 8

#  define WORD_SIZE			8
#  define WORD_SIZE_BYTES	1
#  define WORD_POW2			0
#  define T_INT_WS_MAX		255ull
typedef uint_fast8_t		t_int_ws;

# endif

typedef unsigned long		t_ul;
typedef unsigned long long	t_ull;
typedef uint64_t			t_status;
typedef unsigned char		t_byte;

typedef char*				t_string;

typedef void*				t_vector;
typedef int*				t_vector_int;
typedef char*				t_vector_char;
typedef float*				t_vector_float;
typedef double*				t_vector_double;
typedef long*				t_vector_long;
typedef unsigned*			t_vector_uint;
typedef size_t*				t_vector_sizet;
typedef char*				t_vector_str;
typedef char**				t_vector_dstr;

typedef void*				t_matrix;
typedef int**				t_matrix_int;
typedef char**				t_matrix_char;
typedef float**				t_matrix_float;
typedef double**			t_matrix_double;
typedef long**				t_matrix_long;
typedef unsigned**			t_matrix_uint;
typedef size_t**			t_matrix_sizet;


#endif
