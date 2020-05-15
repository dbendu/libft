/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private_gnl.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 12:40:53 by user              #+#    #+#             */
/*   Updated: 2020/05/15 18:47:13 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRIVATE_GNL_H
# define PRIVATE_GNL_H

# include "ft_types.h"

# define GNL_BUF		1024

typedef struct			s_gnl_list
{
	char				*str;
	size_t				strlen;
	struct s_gnl_list	*next;
}						t_gnl_list;

t_gnl_list				*gnl_list_create(char *str);
void					gnl_list_add(t_gnl_list **list, const char *str,
									size_t len);
void					destroy_list(t_gnl_list *list);
char					*list_to_str(const t_gnl_list *list);

#endif
