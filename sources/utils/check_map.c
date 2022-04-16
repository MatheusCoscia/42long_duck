/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:50:51 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/06 19:51:14 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	while (game->map[x] != NULL)
	{
		y = 0;
		while (game->map[x][y] != '\0')
		{
			if (game->map[x][y] != 'P' && game->map[x][y] != 'E'
				&& game->map[x][y] != 'C' && game->map[x][y] != '0'
				&& game->map[x][y] != '1')
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}
