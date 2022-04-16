/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:05:04 by matrodri          #+#    #+#             */
/*   Updated: 2022/04/16 14:44:38 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**start_map(char *game_map)
{
	int			fd;
	char		**map;
	static char	*init_map;

	fd = open(game_map, O_RDONLY);
	if (fd == -1)
		return (0);
	init_map = ft_strdup("");
	init_map = read_map(fd, init_map);
	map = ft_split(init_map, '\n');
	free(init_map);
	close(fd);
	return (map);
}
