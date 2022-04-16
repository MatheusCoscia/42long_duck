/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:51:29 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/16 17:57:11 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	print_map(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (game->map[y])
	{
		while (game->map[y][x])
		{
			if (game->map[y][x] == '1')
				print_img(game, game->img_wall, x, y);
			else if (game->map[y][x] == '0')
				print_img(game, game->img_tile, x, y);
			else if (game->map[y][x] == 'P')
				print_player(game, game->img_player, x, y);
			else if (game->map[y][x] == 'C')
				print_img(game, game->img_collect, x, y);
			else if (game->map[y][x] == 'E')
				print_exit(game, x, y);
			x++;
		}
		x = 0;
		y++;
	}
	return (0);
}

void	print_img(t_game *game, void *image, int x, int y)
{
	mlx_put_image_to_window
		(game->mlx, game->win, image, x * 40, y * 40);
}

void	print_player(t_game *game, void *image, int x, int y)
{
	print_img(game, image, x, y);
	game->player_x = x;
	game->player_y = y;
}

void	print_player_move(t_game *game, char key)
{
	if (key == 'w')
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "assets/images/PC.xpm", &game->img_x, &game->img_y);
	else if (key == 's')
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "assets/images/PD.xpm", &game->img_x, &game->img_y);
	else if (key == 'd')
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "assets/images/PD.xpm", &game->img_x, &game->img_y);
	else if (key == 'a')
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "assets/images/PE.xpm", &game->img_x, &game->img_y);
}

void	print_exit(t_game *game, int x, int y)
{
	if (game->collect == 0)
		game->img_exit = mlx_xpm_file_to_image
			(game->mlx, "assets/images/E2.xpm", &game->img_x, &game->img_y);
	print_img(game, game->img_exit, x, y);
}
