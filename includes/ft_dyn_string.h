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

char	*dstr_create(int bytes);
char	*dstr_create_from_src(const char *src);
char	*dstr_create_from_srcn(const char *src, int bytes);

void	dstr_add_chr(char **str, char symbol);
void	dstr_add_chrn(char **str, char symbol, int times);
void	dstr_add_str(char **str, const char *append);
void	dstr_add_strn(char **str, const char *append, int bytes);

char	*dstr_to_str(char *dstr);

int		dstr_len(const char *str);
int		dstr_capacity(const char *str);

void	dstr_clear(char *str);
void	dstr_destroy(char *str);

#endif
