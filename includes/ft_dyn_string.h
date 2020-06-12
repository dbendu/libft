/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dyn_string.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 12:35:59 by user              #+#    #+#             */
/*   Updated: 2020/06/02 22:15:07 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DYN_STRING_H
# define FT_DYN_STRING_H

typedef char*	t_dstr;

t_dstr	dstr_create(int bytes);
t_dstr	dstr_create_from_src(const char *src);
t_dstr	dstr_create_from_srcn(const char *src, int bytes);

void	dstr_add_chr(t_dstr *str, char symbol);
void	dstr_add_chrn(t_dstr *str, char symbol, int times);
void	dstr_add_str(t_dstr *str, const char *append);
void	dstr_add_strn(t_dstr *str, const char *append, int bytes);

char	*dstr_to_str(t_dstr dstr);
t_dstr	dstr_copy(t_dstr dstr);

int		dstr_len(t_dstr str);
int		dstr_capacity(t_dstr str);

void	dstr_clear(t_dstr str);
void	dstr_destroy(t_dstr str);

#endif
