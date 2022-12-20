NAME    := push_swap
LIBFT 	:= ../Libft/libft.a
CC      := gcc
CFLAGS  := -Wall -Wextra -Werror -I. 
FILES   := $(shell find . -type f -name "*.c")
OBJ     := $(FILES:%.c=%.o)
all: $(NAME)
$(NAME): $(OBJ)
	@make -C ../Libft
	$(CC) $(CFLAGS) -O2 -o $(NAME) $(OBJ) $(LIBFT)
clean:
	@make clean -C ../Libft
	@rm -f $(OBJ)
fclean: clean
	@make fclean -C ../Libft
	@rm -f $(NAME)
re: fclean all
.PHONY: all bonus clean fclean re
