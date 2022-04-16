/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:32:10 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/09 17:37:18 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "get_next_line.h"
# include "mini_libft.h"
# include "../sources/library/mlx/mlx.h"

# include <stdio.h>
# include <fcntl.h>

# define KEY_ESC 0xff1b
# define KEY_Q 0x71
# define KEY_W 0x77
# define KEY_A 0x61
# define KEY_S 0x73
# define KEY_D 0x64
# define KEY_UP 65362
# define KEY_LEFT 65361
# define KEY_DOWN 65364
# define KEY_RIGHT 65363

typedef struct	s_game
{
	int		invalid;
	int		img_x;
	int		img_y;
	int		collect;
	int		exit;
	int		player;
	int		player_x;
	int		player_y;
	int		moves;
	int		end;
	int		map_x;
	int		map_y;
	char	**map;
	void	*mlx;
	void	*win;
	void	*img_tile;
	void	*img_wall;
	void	*img_player;
	void	*img_collect;
	void	*img_exit;
}	t_game;

/*
**	MAPS
*/
char	*read_map(int fd, char *init_map);
char	**start_map(char *game_map);
int		size_map_x(char **map);
int		size_map_y(char **map);

/*
**	START GAME
*/
void	start_game(t_game *game);
void	start_img(t_game *game);
void	start_window(t_game *game);

/*
**	GAME
*/
void	gameplay(t_game *game);
int		key_input(int key, t_game *game);
void	key_moves(int key, t_game *game);

/*
**	MOVES
*/
void	up_input(t_game *game);
void	left_input(t_game *game);
void	down_input(t_game *game);
void	right_input(t_game *game);

/*
**	PRINT IMAGES
*/
int		print_map(t_game *game);
void	print_img(t_game *game, void *image, int x, int y);
void	print_player(t_game *game, void *image, int x, int y);
void	print_player_move(t_game *game, char key);
void	print_exit(t_game *game, int x, int y);

/*
**	CHECK MAP
*/
int		check_game(t_game *game);
int		check_map(t_game *game);
int		check_play(t_game *game);
int		check_size(char **map);
int		check_wall(char **map);

/*
**	CHECK ARGS
*/
int		check_args(int argc, char *argv, char *extension);
int		check_extension(char *argv, char *extension);

/*
**	MESSAGE
*/
void	how_to_use(void);
void	wrong_extension(void);
void	invalid_map(t_game *game);
void	end_game(void);
void	print_moves(t_game *game);

/*
**	CLOSE GAME
*/
int		close_game(t_game *game);
void	delete_map(t_game *game);
void	delete_images(t_game *game);
void	delete_window(t_game *game);
void	delete_display(t_game *game);

#endif
