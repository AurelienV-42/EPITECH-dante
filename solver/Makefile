##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Aurélien Vandaële <aurelien.vandaele@epitech.eu>
##

SRC	=	src/main.c			\
		src/solver_maze.c		\
		src/check_parse/check.c		\
		src/check_parse/my_open.c	\
		src/check_parse/str_to_array.c	\
		src/movements.c			\
		src/print.c

NAME	=	solver

OBJ	=	$(SRC:.c=.o)

COMPIL	=	-lmy -Llib/my

CFLAGS	=	-W -Wall -Wextra -I include/ -O2

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my
		gcc -o $(NAME) $(OBJ) $(COMPIL) $(CFLAGS)

clean:
		make clean -C lib/my
		rm -f $(OBJ)

fclean:		clean
		make fclean -C lib/my
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean
