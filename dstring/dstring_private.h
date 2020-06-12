/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstring_private.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 01:22:30 by user              #+#    #+#             */
/*   Updated: 2020/06/02 13:00:06 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DSTRING_PRIVATE_H
# define DSTRING_PRIVATE_H

# define PEACE_SIZE	16

typedef struct	s_dstring
{
	int			len;
	int			capacity;
	char		*str;
}				t_dstring;

t_dstring		*dstr_expand(t_dstring *old, int need);
int				dstr_align(int bytes);

#endif
