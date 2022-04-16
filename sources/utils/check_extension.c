/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_extension.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:17:48 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/10 19:15:52 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_extension(char *argv, char *extension)
{
	int	arg_len;
	int	ext_len;

	arg_len = ft_strlen(argv);
	ext_len = ft_strlen(extension);
	while (ext_len > 0)
	{
		if (extension[ext_len--] != argv[arg_len--])
			return (0);
	}
	return (1);
}
