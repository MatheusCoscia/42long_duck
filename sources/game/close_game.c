/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:39:51 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/15 12:04:20 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	close_game(t_game *game)
{
	delete_map(game);
	delete_images(game);
	delete_window(game);
	delete_display(game);
	end_game();
	return (0);
}

void	delete_map(t_game *game)
{
	int	delete_map;

	delete_map = 0;
	while (game->map[delete_map])
	{
		free(game->map[delete_map]);
		delete_map++;
	}
	free(game->map);
}

void	delete_images(t_game *game)
{
	mlx_destroy_image(game->mlx, game->img_tile);
	mlx_destroy_image(game->mlx, game->img_wall);
	mlx_destroy_image(game->mlx, game->img_player);
	mlx_destroy_image(game->mlx, game->img_collect);
	mlx_destroy_image(game->mlx, game->img_exit);
}

void	delete_window(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
}

void	delete_display(t_game *game)
{
	mlx_destroy_display(game->mlx);
	free(game->mlx);
}
