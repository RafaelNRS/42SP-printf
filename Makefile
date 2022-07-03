# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ranascim <ranascim@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 08:49:45 by ranascim          #+#    #+#              #
#    Updated: 2022/06/29 09:30:24 by ranascim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_DIR = libft/
LIBFT = $(LIBFT_DIR)/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src/
SRC = $(SRC_DIR)/*.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC)
		$(MAKE) all -C $(LIBFT_DIR)
		cp $(LIBFT) $(NAME)
		$(CC) $(CFLAGS) -c $(SRC) -I ./include/
		mv *.o ./src/
		ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(LIBFT_DIR)*.o
	rm -f $(SRC_DIR)*.o

fclean: clean
	rm -f $(NAME)

re: fclean all