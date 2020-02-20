NAME = libft.a
CFLAG = -Wall -Wextra -Werror -c
SRCS = srcs/ft_memset.c srcs/ft_bzero.c srcs/ft_memcpy.c srcs/ft_memccpy.c \
	   srcs/ft_memmove.c srcs/ft_memchr.c srcs/ft_memcmp.c srcs/ft_strcat.c \
	   srcs/ft_strcpy.c srcs/ft_strdup.c srcs/ft_strlen.c srcs/ft_strncat.c \
	   srcs/ft_strncpy.c
INC = includes

all: $(NAME)

$(NAME):
	gcc $(CFLAG) ./srcs/ft_*.c -I $(INC)
	ar rcs $(NAME) ft_*.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
