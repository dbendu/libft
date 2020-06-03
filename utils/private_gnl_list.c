/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private_gnl_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 12:41:05 by user              #+#    #+#             */
/*   Updated: 2020/06/03 20:59:41 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "private_gnl.h"
#include "ft_memory.h"
#include "ft_string.h"

t_gnl_list	*gnl_list_create(char *str)
{
	const size_t	strlen = ft_strlen(str);
	t_gnl_list		*list;

	list = malloc(sizeof(t_gnl_list));
	list->str = str;
	list->strlen = strlen;
	list->next = NULL;
	return (list);
}

void		gnl_list_add(t_gnl_list **list, const char *str, size_t len)
{
	t_gnl_list	*node;
	t_gnl_list	*iter;

	if (*list && !len)
		return ;
	node = malloc(sizeof(t_gnl_list));
	node->str = malloc(len + 1);
	ft_memcpy(node->str, str, len);
	node->str[len] = '\0';
	node->next = NULL;
	node->strlen = len;
	if (!*list)
		*list = node;
	else
	{
		iter = *list;
		while (iter->next)
			iter = iter->next;
		iter->next = node;
	}
}

char		*list_to_str(const t_gnl_list *list)
{
	size_t				len;
	size_t				offset;
	const t_gnl_list	*iter = list;
	char				*str;

	len = 0;
	while (iter)
	{
		len += iter->strlen;
		iter = iter->next;
	}
	str = malloc(len + 1);
	offset = 0;
	while (list)
	{
		ft_memcpy(str + offset, list->str, list->strlen);
		offset += list->strlen;
		list = list->next;
	}
	str[len] = '\0';
	return (str);
}

void		destroy_list(t_gnl_list *list)
{
	t_gnl_list	*next;

	while (list)
	{
		next = list->next;
		free(list->str);
		free(list);
		list = next;
	}
}
