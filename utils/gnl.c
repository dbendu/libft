/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 12:40:33 by user              #+#    #+#             */
/*   Updated: 2020/05/16 12:56:01 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "private_gnl.h"

#define __STR_BUILT	true

static bool	buf_read(char **buf, char **line,
					t_gnl_list **list, bool *newline_founded)
{
	char *const	npos = ft_strchr(*buf, '\n');
	char		*new_buf;

	if (npos)
	{
		*npos = '\0';
		*line = ft_strdup(*buf);
		if (npos[1] != '\0')
			new_buf = ft_strdup(npos + 1);
		else
			new_buf = NULL;
		free(*buf);
		*buf = new_buf;
		if (newline_founded)
			*newline_founded = true;
		return (__STR_BUILT);
	}
	else
	{
		*list = gnl_list_create(*buf);
		*buf = NULL;
		return (!__STR_BUILT);
	}
}

static char	*add_to_buf(char *text, const char *npos, ssize_t ret)
{
	const size_t	len = ret - (npos - text) - 1;
	char			*str;

	if (!len)
		return (NULL);
	str = malloc(len + 1);
	ft_memcpy(str, npos + 1, len);
	str[len] = '\0';
	return (str);
}

ssize_t		gnl_cycle(const int fd, t_gnl_list **list, char *text,
						const char **nposptr)
{
	ssize_t		ret;
	const char	*npos = NULL;

	while ((ret = read(fd, text, GNL_BUF)) > 0)
	{
		npos = ft_memchr(text, '\n', ret);
		if (!npos || (npos - text != ret))
			gnl_list_add(list, text, npos ? npos - text : ret);
		if (npos)
			break ;
	}
	*nposptr = npos;
	return (ret);
}

int			gnl(const int fd, char **line, bool *newline_founded)
{
	static char	*buf = NULL;
	ssize_t		ret;
	t_gnl_list	*list;
	char		text[GNL_BUF];
	const char	*npos;

	list = NULL;
	npos = NULL;
	if (buf && buf_read(&buf, line, &list, newline_founded) == __STR_BUILT)
		return (GNL_OK);
	ret = gnl_cycle(fd, &list, text, &npos);
	if (!list)
		return (GNL_EOF);
	if (npos && npos - text != ret - 1)
		buf = add_to_buf(text, npos, ret);
	*line = list_to_str(list);
	if (newline_founded)
		*newline_founded = npos ? true : false;
	destroy_list(list);
	return (GNL_OK);
}
