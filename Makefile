CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = 
OBJ = (SRC:.c=.o)
NAME = libftprintf.a

all : $(NAME)
$(NAME) : $(SRC)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)

.PHONY : all clean fclean re