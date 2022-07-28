NAME = libft.a

all: $(NAME)
	gcc -Wall -Wextra -Werror server.c libft.a -o server
	gcc -Wall -Wextra -Werror client.c libft.a -o client

$(NAME):
	make -C Libft
	cp Libft/libft.a .

clean:
	make clean -C Libft

fclean:
	make fclean -C Libft
	rm -rf server client libft.a

re: fclean all
