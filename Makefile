NAME	= libftprintf.a

SRCS	= ft_printf.c \
			utils/ft_basenblen.c \
			utils/ft_putchar.c \
			utils/ft_putstr.c \
			utils/ft_putnbr.c \
			utils/ft_putnbr_base.c \
			utils/ft_puthexa.c \

OBJS	= $(SRCS:c=o)

FLAGS	= -Wall -Wextra -Werror

CC		= gcc

RM		= rm -f


%.o		:		%.c
			$(CC) $(FLAGS) -c $< -o $@

$(NAME) :	$(OBJS)
			ar -rcs $(NAME) $^

all		:	$(NAME)

clean	:	$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:   all clean fclean re