/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 12:29:28 by user              #+#    #+#             */
/*   Updated: 2020/04/03 12:30:58 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include "ft_types.h"
# include "ft_memory.h"

t_bool		ft_strcmp(const char *str1, const char *str2);
char		*ft_strchr(const char *str, int character);
char		*ft_strdup(const char *str);
t_bool		ft_strequ(const char *s1, const char *s2);
t_bool		ft_strnequ(const char *s1, const char *s2, size_t symbols);
size_t		ft_strlen(const char *str);

t_bool		ft_isspace(int c);
t_bool		ft_isdigit(int c);
t_bool		ft_isalpha(int c);

#endif
