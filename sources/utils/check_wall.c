/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:52:14 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/10 19:16:34 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	first_check(char **map)
{
	int	y;
	int	x;

	y = size_map_y(map) - 1;
	x = size_map_x(map) - 1;
	while (x > 0)
	{
		if (map[0][x] != '1')
			return (0);
		if (map[y][x] != '1')
			return (0);
		x--;
	}
	return (1);
}

static int	second_check(char **map)
{
	int	y;
	int	x;

	y = size_map_y(map) - 1;
	x = size_map_x(map) - 1;
	while (y > 0)
	{
		if (map[y][0] != '1')
			return (0);
		if (map[y][x] != '1')
			return (0);
		y--;
	}
	return (1);
}

int	check_wall(char **map)
{
	if (!first_check(map) || !second_check(map))
		return (0);
	return (1);
}
