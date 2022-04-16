/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:06:37 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/06 21:17:56 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_args(int argc, char *argv, char *extension)
{
	if (argc < 1)
		how_to_use();
	else if (!check_extension(argv, extension))
		wrong_extension();
	return (1);
}
