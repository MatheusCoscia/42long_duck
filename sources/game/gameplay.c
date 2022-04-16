/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:33:48 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/10 19:13:21 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	gameplay(t_game *game)
{
	mlx_key_hook(game->win, key_input, game);
	mlx_hook(game->win, 9, 1L << 21, print_map, game);
	mlx_hook(game->win, 17, 1L << 17, close_game, game);
}
