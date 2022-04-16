/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:42:24 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/16 17:57:29 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	start_game(t_game *game)
{
	game->mlx = mlx_init();
	start_window(game);
	game->win = mlx_new_window
		(game->mlx, game->map_x * 40, game->map_y * 40, "so_long");
	game->moves = 0;
	game->end = 0;
	start_img(game);
	print_map(game);
}
