/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:04:51 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/06 15:03:40 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*read_map(int fd, char *init_map)
{
	char	*line;
	char	*map;

	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		map = init_map;
		init_map = ft_strjoin(map, line);
		free(line);
		free(map);
	}
	return (init_map);
}
