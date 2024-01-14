SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
NAME = libft.a
HEADER = ./includes/

all: $(NAME)

$(NAME) :
	cc -Wall -Wextra -Werror -c $(SRC) -I $(HEADER)
	ar rc $(NAME) *.o
	
clean :
	rm -rf *.o 
fclean: clean
	rm -rf $(NAME)
	rm -rf include/*.*.gch

re: fclean all