##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Aurélien Vandaële <aurelien.vandaele@epitech.eu>
##

NAME	=	binary

all:		$(NAME)

$(NAME):
		mkdir tournament
		make -C generator
		make -C solver
		cp solver/solver tournament

clean:
		rm -rf tournament
		make clean -C generator
		make clean -C solver

fclean:		clean
		make fclean -C generator
		make fclean -C solver

.PHONY:		all clean fclean
