/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_img.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:42:48 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/16 17:57:35 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	start_img(t_game *game)
{
	game->img_x = 40;
	game->img_y = 40;
	game->img_tile = mlx_xpm_file_to_image
		(game->mlx, "assets/images/0.xpm", &game->img_x, &game->img_y);
	game->img_wall = mlx_xpm_file_to_image
		(game->mlx, "assets/images/1.xpm", &game->img_x, &game->img_y);
	game->img_player = mlx_xpm_file_to_image
		(game->mlx, "assets/images/PD.xpm", &game->img_x, &game->img_y);
	game->img_collect = mlx_xpm_file_to_image
		(game->mlx, "assets/images/C.xpm", &game->img_x, &game->img_y);
	game->img_exit = mlx_xpm_file_to_image
		(game->mlx, "assets/images/E1.xpm", &game->img_x, &game->img_y);
}
