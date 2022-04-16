/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   messages.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:25:54 by matrodri          #+#    #+#             */
/*   Updated: 2022/04/16 14:38:45 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	how_to_use(void)
{
	write(2, "usage: ./so_long [map.ber]\n", 27);
	exit(0);
}

void	wrong_extension(void)
{
	printf("\033[0;31mINVALID ARGUMENTS\n\033[0m");
	printf("wrong arguments, remember to use .ber files\n");
	exit(0);
}

void	invalid_map(t_game *game)
{
	if (game->invalid == 1 || game->invalid == 2)
	{
		printf("\033[0;31mINVALID MAP\n\033[0m");
		printf("wrong map arguments\n");
	}
	else if (game->invalid == 3)
	{
		printf("\033[0;31mINVALID MAP\n\033[0m");
		printf("your map don't have walls\n");
	}
	else if (game->invalid == 4)
	{
		printf("\033[0;31mINVALID MAP\n\033[0m");
		printf("your map is not retangular\n");
	}
	exit(0);
}

void	end_game(void)
{
	write(2, "Thank you for play!\n", 20);
	exit(0);
}

void	print_moves(t_game *game)
{
	char	*str;

	str = ft_itoa(game->moves);
	mlx_string_put(game->mlx, game->win, 20, 405, 0xFFFFFF, "Current steps: ");
	mlx_string_put(game->mlx, game->win, 110, 405, 0xFFFFFF, str);
	mlx_string_put(game->mlx, game->win, 200, 405, 0xFFFFFF, "/ MCoscia");
	free(str);
}
