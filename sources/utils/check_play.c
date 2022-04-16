/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_play.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:51:46 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/09 16:17:02 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_play(t_game *game)
{
	int	x;
	int	y;

	game->collect = 0;
	game->player = 0;
	game->exit = 0;
	x = 0;
	while (game->map[x] != NULL)
	{
		y = 0;
		while (game->map[x][y] != '\0')
		{
			if (game->map[x][y] == 'P')
				game->player++;
			if (game->map[x][y] == 'E')
				game->exit++;
			if (game->map[x][y] == 'C')
				game->collect++;
			y++;
		}
		x++;
	}
	if (game->player != 1 || game->exit == 0 || game->collect == 0)
		return (0);
	return (1);
}
