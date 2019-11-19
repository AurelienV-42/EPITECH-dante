/*
** EPITECH PROJECT, 2017
** Solver maze
** File description:
** Main function which also check number of arguments
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"
#include "solver.h"

int main(int ac, char **av)
{
	char **array = NULL;

	if (ac == 2 && my_strcmp("-h", av[1]) == 1) {
		my_printf("USAGE:\n\t%s [filepath_maze]\n", av[0]);
		return (0);
	}
	if (ac != 2) {
		my_putstr_error("Bad number of arguments!\n");
		return (84);
	}
	array = check(av[1]);
	if (array == NULL)
		return (84);
	array = solver_maze(array);
	print_my_array(array);
	my_free_array(array);
	return (0);
}
