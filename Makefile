CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_check.c ft_hexalen.c ft_printf.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putstr.c ft_putunbr.c ft_valid_format.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all : $(NAME)
$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)

.PHONY : all clean fclean re