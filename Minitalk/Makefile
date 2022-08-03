# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edogrul <edogrul@student.42kocaeli.com.tr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/03 00:25:57 by edogrul           #+#    #+#              #
#    Updated: 2022/08/03 00:26:05 by edogrul          ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIBFT = Libft

all: $(NAME)
	gcc server.c $(NAME) -o server
	gcc client.c $(NAME) -o client

$(NAME): $(LIBFT)
	make -C $(LIBFT)
	cp Libft/libft.a .

clean:
	make clean -C $(LIBFT)

fclean: clean
	make fclean -C $(LIBFT)
	rm -rf $(NAME)
	rm -rf server client
re: fclean all
.PHONY:all clean fclean re
