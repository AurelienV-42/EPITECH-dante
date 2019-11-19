##
## EPITECH PROJECT, 2018
## Library : Makefile
## File description:
## Aurélien Vandaële <aurelien.vandaele@epitech.eu>
##

SRC	=	malloc2d.c			\
		my_atoi.c			\
		my_free_array.c                 \
		my_putchar.c                    \
		my_putnbr.c                     \
		my_putstr.c                     \
		my_putstr_error.c               \
		my_strcat.c                     \
		my_strcmp.c                     \
		my_strlen_array.c               \
		my_strlen.c                     \
		my_strncmp.c                    \
		my_str_to_word_array.c          \
		printf/func_to_print.c          \
		printf/func_to_print_base.c     \
		printf/my_printf.c              \
		printf/my_putnbr_base.c         \
		printf/my_putunsignednbr.c      \
		printf/my_strcpy.c              \
		printf/my_strdup.c

OBJ	= 	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	 -I../../include/

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
		rm -f *~ printf/*~

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean
