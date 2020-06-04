/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 12:29:25 by user              #+#    #+#             */
/*   Updated: 2020/05/29 14:06:17 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# define FT_BIG_ENDIAN		(1)
# define FT_LITTLE_ENDIAN	(0)

# define GNL_EOF			(0)
# define GNL_OK				(1)

# define PI					3.14159265358979323846

# include <stdlib.h>
# include <unistd.h>
# include "ft_types.h"
# include "ft_string.h"
# include "ft_memory.h"

int			ft_min(int a, int b);
int			ft_max(int a, int b);

void		print_log(const char *msg);
void		print_err_log(const char *msg);
void		print_log_fd(const char *msg, int fd);
void		ft_assert(bool expr, const char *msg);
void		ft_error(const char *msg, const char *func, int code);

int			ft_atoi(const char *str);
char		*ft_itoa_static(int64_t num, unsigned radix);
char		*ft_itoa(int64_t num, char *str, unsigned radix);

double		to_ang(double rad);
double		to_rad(double angle);

int			bytes_order(void);
bool		is_dir(const char *filename);
int			random_number(int begin, int end);
void		*ft_calloc(size_t elems, size_t elem_size);
char		*num_to_bits(void *numptr, size_t typesize);
int			gnl(const int fd, char **line, bool *newline_found);

int			ft_stoi(const char *str, size_t *pos, int base);

#endif
