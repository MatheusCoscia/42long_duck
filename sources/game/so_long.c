/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:06:12 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/09 15:59:12 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc == 2)
	{
		check_args(argc, argv[1], ".ber");
		game.map = start_map(argv[1]);
		if (!check_game(&game))
		{
			delete_map(&game);
			invalid_map(&game);
		}
		else if (game.map)
		{
			start_game(&game);
			gameplay(&game);
			mlx_loop(game.mlx);
		}
	}
	how_to_use();
	return (0);
}
