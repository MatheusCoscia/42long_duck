/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:25:20 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/04 21:46:59 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 1

# include "mini_libft.h"

/*
** GNL
*/
char	*get_next_line(int fd);
char	*get_line(char *src, int fd);
char	*ft_save(char *src);
char	*ft_read_line(char *src);

/*
** UTILS
*/
char	*ft_strchr_gnl(char *src, int c);
size_t	ft_strlen_gnl(char *s);
char	*ft_strjoin_gnl(char *s1, char *s2);

#endif
