/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 22:39:05 by bstacksp          #+#    #+#             */
/*   Updated: 2019/09/23 23:39:52 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
# define BUFF_SIZE 10

# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"
# include "fcntl.h"
# include "sys/types.h"
# include "sys/uio.h"

int		get_next_line(const int fd, char**line);
int		new_line(char **s, char **line, int fd, int ret);

#endif