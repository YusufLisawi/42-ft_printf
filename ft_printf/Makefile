NAME	= libftprintf.a

SRCS	= ft_printf.c \
			ft_printf_utils/ft_basenblen.c \
			ft_printf_utils/ft_putchar.c \
			ft_printf_utils/ft_putstr.c \
			ft_printf_utils/ft_putnbr.c \
			ft_printf_utils/ft_putnbr_base.c \
			ft_printf_utils/ft_puthexa.c \
			ft_printf_utils/ft_strlen.c \

OBJS	= $(SRCS:c=o)

FLAGS	= -Wall -Wextra -Werror

CC		= gcc

RM		= rm -f


%.o		:	%.c
			$(CC) $(FLAGS) -c $< -o $@

$(NAME) :	$(OBJS)
			ar -rcs $(NAME) $^

all		:	$(NAME)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:   all clean fclean re