/*
** EPITECH PROJECT, 2017
** Main
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "my.h"
#include "generator.h"

int main(int ac, char **av)
{
	if (ac == 2 && my_strcmp("-h", av[1]) == 1) {
		my_printf("USAGE:\n\t%s x y [perfect]\n", av[0]);
		return (0);
	}
	if (ac == 1 || my_atoi(av[1]) == -1 || my_atoi(av[2]) == -1) {
		my_putstr_error("Look at the -h!\n");
		return (84);
	}
	if (ac == 4) {
		if (my_strcmp("perfect", av[3])) {
			generator_maze(my_atoi(av[1]), my_atoi(av[2]), 1);
			return (0);
		}
		my_putstr_error("Look at the -h!\n");
		return (84);
	}
	if (ac != 3)
		my_putstr_error("Look at the -h!\n");
	else
		generator_maze(my_atoi(av[1]), my_atoi(av[2]), 0);
	return (0);
}
