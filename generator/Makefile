##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Aurélien Vandaële <aurelien.vandaele@epitech.eu>
##

SRC	=	src/generator_maze.c	\
		src/imperfect.c		\
		src/main.c		\
		src/movements.c		\
		src/second_step.c	\
		src/print.c

NAME	=	generator

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
