/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_types.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 12:29:27 by user              #+#    #+#             */
/*   Updated: 2020/06/02 12:59:30 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TYPES_H
# define FT_TYPES_H

# include <stdint.h>
# include <stddef.h>
# include <stdbool.h>

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
typedef char*				t_dstr;
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
