/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:21:11 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/10 15:18:26 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/*	quantidade de colunas */
int	size_map_x(char **map)
{
	return ((int)ft_strlen(map[0]));
}

/*	quantidade de linhas */
int	size_map_y(char **map)
{
	int	y;

	y = 0;
	while (map[y])
		y++;
	return (y);
}
