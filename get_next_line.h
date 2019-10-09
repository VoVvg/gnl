/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 01:46:24 by bstacksp          #+#    #+#             */
/*   Updated: 2019/10/01 19:18:59 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 22
# define MAX_FD 256
# define CHECKRETURN(a, b) if(a) return (b);
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

int	get_next_line(const int fd, char **line);

#endif
