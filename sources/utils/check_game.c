/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:23:43 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/06 21:38:32 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_game(t_game *game)
{
	game->invalid = 0;
	if (!check_map(game))
	{
		game->invalid = 1;
		return (0);
	}
	if (!check_play(game))
	{
		game->invalid = 2;
		return (0);
	}
	if (!check_wall(game->map))
	{
		game->invalid = 3;
		return (0);
	}
	if (!check_size(game->map))
	{
		game->invalid = 4;
		return (0);
	}
	return (1);
}
