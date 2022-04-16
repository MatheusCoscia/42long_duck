/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:13:34 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/09 17:52:27 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	up_input(t_game *game)
{
	print_player_move(game, 'w');
	if (game->map[game->player_y][game->player_x] == '0')
	{
		game->map[game->player_y][game->player_x] = 'P';
		game->map[game->player_y + 1][game->player_x] = '0';
		game->moves++;
	}
	else if (game->map[game->player_y][game->player_x] == 'E'
			&& game->collect == 0)
	{
		game->map[game->player_y + 1][game->player_x] = '0';
		game->moves++;
		game->end = 1;
	}
	else if (game->map[game->player_y][game->player_x] == '1'
			|| game->map[game->player_y][game->player_x] == 'E')
		game->player_y += 1;
	else if (game->map[game->player_y][game->player_x] == 'C')
	{
		game->collect -= 1;
		game->map[game->player_y][game->player_x] = 'P';
		game->map[game->player_y + 1][game->player_x] = '0';
		game->moves++;
	}
	print_map(game);
}

void	left_input(t_game *game)
{
	print_player_move(game, 'a');
	if (game->map[game->player_y][game->player_x] == '0')
	{
		game->map[game->player_y][game->player_x] = 'P';
		game->map[game->player_y][game->player_x + 1] = '0';
		game->moves++;
	}
	else if (game->map[game->player_y][game->player_x] == 'E'
			&& game->collect == 0)
	{
		game->map[game->player_y][game->player_x + 1] = '0';
		game->moves++;
		game->end = 1;
	}
	else if (game->map[game->player_y][game->player_x] == '1'
			|| game->map[game->player_y][game->player_x] == 'E')
		game->player_x += 1;
	else if (game->map[game->player_y][game->player_x] == 'C')
	{
		game->collect -= 1;
		game->map[game->player_y][game->player_x] = 'P';
		game->map[game->player_y][game->player_x + 1] = '0';
		game->moves++;
	}
	print_map(game);
}

void	down_input(t_game *game)
{
	print_player_move(game, 's');
	if (game->map[game->player_y][game->player_x] == '0')
	{
		game->map[game->player_y][game->player_x] = 'P';
		game->map[game->player_y - 1][game->player_x] = '0';
		game->moves++;
	}
	if (game->map[game->player_y][game->player_x] == 'E'
			&& game->collect == 0)
	{
		game->map[game->player_y - 1][game->player_x] = '0';
		game->moves++;
		game->end = 1;
	}
	else if (game->map[game->player_y][game->player_x] == '1'
			|| game->map[game->player_y][game->player_x] == 'E')
		game->player_y -= 1;
	else if (game->map[game->player_y][game->player_x] == 'C')
	{
		game->collect -= 1;
		game->map[game->player_y][game->player_x] = 'P';
		game->map[game->player_y - 1][game->player_x] = '0';
		game->moves++;
	}
	print_map(game);
}

void	right_input(t_game *game)
{
	print_player_move(game, 'd');
	if (game->map[game->player_y][game->player_x] == '0')
	{
		game->map[game->player_y][game->player_x] = 'P';
		game->map[game->player_y][game->player_x - 1] = '0';
		game->moves++;
	}
	else if (game->map[game->player_y][game->player_x] == 'E'
			&& game->collect == 0)
	{
		game->map[game->player_y][game->player_x - 1] = '0';
		game->moves++;
		game->end = 1;
	}
	else if (game->map[game->player_y][game->player_x] == '1'
			|| game->map[game->player_y][game->player_x] == 'E')
		game->player_x -= 1;
	else if (game->map[game->player_y][game->player_x] == 'C')
	{
		game->collect -= 1;
		game->map[game->player_y][game->player_x] = 'P';
		game->map[game->player_y][game->player_x - 1] = '0';
		game->moves++;
	}
	print_map(game);
}
