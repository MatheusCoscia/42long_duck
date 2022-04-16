# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 15:18:12 by matrodri          #+#    #+#              #
#    Updated: 2022/04/16 14:59:08 by matrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = clang
CFLAGS = -Wall -Wextra -Werror -g

PATH_INC = ./include/
PATH_OBJS = ./obj/
PATH_SRCS = ./sources/
PATH_GAME = $(PATH_SRCS)game/
PATH_MAPS = $(PATH_SRCS)maps/
PATH_START = $(PATH_SRCS)start_game/
PATH_UTILS = $(PATH_SRCS)utils/
PATH_LIB = $(PATH_SRCS)library/
PATH_GNL = $(PATH_LIB)gnl/
PATH_LBF = $(PATH_LIB)mini_libft/
PATH_MLX = $(PATH_LIB)mlx/

INCLUDE = -I $(PATH_INC)

MLXFLAGS = -I $(PATH_MLX) -L $(PATH_MLX) -lmlx -Ilmlx -lXext -lX11

MLX = $(PATH_MLX)libmlx.a

SRCS =	$(PATH_GAME)close_game.c \
		$(PATH_GAME)gameplay.c \
		$(PATH_GAME)key_input.c \
		$(PATH_GAME)moves.c \
		$(PATH_GAME)print_game.c \
		$(PATH_MAPS)read_map.c \
		$(PATH_MAPS)size_map.c \
		$(PATH_MAPS)start_map.c \
		$(PATH_START)start_game.c \
		$(PATH_START)start_img.c \
		$(PATH_START)start_window.c \
		$(PATH_UTILS)check_args.c \
		$(PATH_UTILS)check_extension.c \
		$(PATH_UTILS)check_game.c \
		$(PATH_UTILS)check_map.c \
		$(PATH_UTILS)check_play.c \
		$(PATH_UTILS)check_size.c \
		$(PATH_UTILS)check_wall.c \
		$(PATH_UTILS)messages.c \
		$(PATH_GNL)get_next_line.c \
		$(PATH_GNL)get_next_line_utils.c \
		$(PATH_LBF)ft_itoa.c \
		$(PATH_LBF)ft_calloc.c \
		$(PATH_LBF)ft_split.c \
		$(PATH_LBF)ft_strdup.c \
		$(PATH_LBF)ft_strjoin.c \
		$(PATH_LBF)ft_strlen.c

OBJS = $(patsubst $(PATH_SRCS)%.c, $(PATH_OBJS)%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(PATH_MLX)
	$(CC) $(INCLUDE) $(PATH_GAME)so_long.c $(OBJS) $(MLX) $(MLXFLAGS) -o $(NAME)

$(PATH_OBJS)%.o:	$(PATH_SRCS)%.c
	@mkdir -p $(PATH_OBJS)
	@mkdir -p $(PATH_OBJS)game
	@mkdir -p $(PATH_OBJS)library
	@mkdir -p $(PATH_OBJS)library/gnl
	@mkdir -p $(PATH_OBJS)library/mini_libft
	@mkdir -p $(PATH_OBJS)maps
	@mkdir -p $(PATH_OBJS)start_game
	@mkdir -p $(PATH_OBJS)utils
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@rm -rf $(PATH_OBJS)

fclean: clean
	@rm -f $(NAME)

re:	fclean all

norm:
	@norminette $(PATH_GAME) $(PATH_MAPS) $(PATH_START) $(PATH_UTILS)
	@norminette $(PATH_LBF) $(PATH_GNL)
	@echo "\033[0;32mNORMINETTE OK\033[0m"

.PHONY:	all clean fclean re

run: re
	./so_long ./assets/map_file/map_02.ber
