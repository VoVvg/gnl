/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 20:08:19 by bstacksp          #+#    #+#             */
/*   Updated: 2019/09/26 20:05:36 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static	char	*s[0];
	char			buf[BUFF_SIZE + 1];
	int				ret;

	if (fd < 0 || line == NULL || read(fd, NULL, 0) < 0)
		return (-1);
	if (!s[fd])
		s[fd] = ft_strnew(0);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		ft_swapnfree(&s[fd], ft_strjoin(s[fd], buf));
		if (ft_strchr(s[fd], '\n'))
			break ;
	}
	if (!*s[fd])
		return (0);
	*line = ft_strsub(s[fd], 0, ft_strsnlen(s[fd]));
	(ft_strlen(*line) < ft_strlen(s[fd]) ? ft_swapnfree(&s[fd],
		ft_strdup(s[fd] + ft_strsnlen(s[fd]) + 1)) : ft_strdel(&s[fd]));
	return (1);
}
