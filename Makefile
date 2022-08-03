# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 08:49:45 by ranascim          #+#    #+#              #
#    Updated: 2022/08/02 20:27:25 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_DIR = libft/
LIBFT = $(LIBFT_DIR)/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src/
SRC = ft_print_d.c ft_print_p.c ft_print_s.c ft_printf.c ft_change_base.c

OBJ_DIR = obj/
OBJ = $(SRC:%.c=$(OBJ_DIR)%.o)

vpath %.c $(SRC_DIR)

all: $(NAME)

$(NAME): $(OBJ)
		$(MAKE) all -C $(LIBFT_DIR)
		cp $(LIBFT) $(NAME)
		ar -rc $(NAME) $(OBJ)

$(OBJ_DIR)%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I include -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -rf $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
