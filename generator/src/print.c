/*
** EPITECH PROJECT, 2018
** n4s
** File description:
** print
*/

#include <stddef.h>
#include "my.h"
#include "generator.h"

void print_my_array(char **array)
{
	for (int i = 0; array[i] != NULL; i++) {
		if (array[i + 1] == NULL) {
			my_printf("%s", array[i]);
			return;
		}
		my_printf("%s\n", array[i]);
	}
}
