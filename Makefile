NAME  = libftprintf.a
CC    = cc
FLAGS = -Wall -Wextra -Werror
AR    = ar -rcs
RM    = rm -f
SRCS  = ft_printf.c \
		ft_print_s.c \
		ft_print_p.c \
		ft_print_d.c \
		ft_put_base.c
		
OBJS  = $(SRCS:.c=.o)

.c.o:
		$(CC) $(FLAGS) -c $< -o $(<:.c=.o)
		
all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

$(OBJS):	$(SRCS)
			$(CC) $(FLAGS) -c $(SRCS)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re