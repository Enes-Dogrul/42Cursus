NAME    := libftprintf.a
CC      := clang
CFLAGS  := -Wall -Wextra -Werror -I. -c
FILES   := $(shell find . -type f -name "*.c")
OBJ     := $(FILES:%.c=%.o)
all: $(NAME)
$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)
clean:
	@rm -f *.o
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all bonus clean fclean re
