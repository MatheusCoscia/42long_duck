/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:19:32 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/10 19:14:35 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_input(int key, t_game *game)
{
	if (!game->end)
	{
		key_moves(key, game);
		mlx_clear_window(game->mlx, game->win);
		print_map(game);
		print_moves(game);
	}
	if (key == KEY_Q || key == KEY_ESC)
		close_game(game);
	return (key);
}

void	key_moves(int key, t_game *game)
{
	if (key == KEY_W || key == KEY_UP)
	{
		game->player_y--;
		up_input(game);
	}
	else if (key == KEY_A || key == KEY_LEFT)
	{
		game->player_x--;
		left_input(game);
	}
	else if (key == KEY_S || key == KEY_DOWN)
	{
		game->player_y++;
		down_input(game);
	}
	else if (key == KEY_D || key == KEY_RIGHT)
	{
		game->player_x++;
		right_input(game);
	}
}
