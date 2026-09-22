NAME = libft.a
HEADER = libft.h

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c

OBJ = $(SRC:.c=.o)
AR = ar rcs


all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re

