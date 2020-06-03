/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 12:29:28 by user              #+#    #+#             */
/*   Updated: 2020/06/03 20:59:17 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>
# include <stdbool.h>

char		*ft_strdup(const char *str);
char		*ft_strndup(const char *src, size_t bytes);

size_t		ft_strlen(const char *str);

bool		ft_strcmp(const char *str1, const char *str2);
bool		ft_strequ(const char *s1, const char *s2);
bool		ft_strnequ(const char *s1, const char *s2, size_t symbols);

char		*ft_strcpy(char *dst, const char *src);

char		*ft_strchr(const char *str, int character);

bool		ft_ishex(char c);
bool		ft_isspace(int c);
bool		ft_isdigit(int c);
bool		ft_isalpha(int c);

int			ft_tolower(int c);
int			ft_toupper(int c);

#endif
