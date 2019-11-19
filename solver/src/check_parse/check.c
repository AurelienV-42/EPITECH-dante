/*
** EPITECH PROJECT, 2022
** Game Of Life
** File description:
** File which check the buffer of the filepath
*/

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "solver.h"

static int check_buffer(char *buffer)
{
	int nb;
	int n = 1;
	int i;

	for (int j = 0; buffer != NULL && buffer[j] != '\0'; j++)
		if (buffer[j] != '*' && buffer[j] != 'X' && buffer[j] != '\n')
			return (84);
	for (nb = 0; buffer[nb] != '\0' && buffer[nb] != '\n'; nb++);
	for (i = nb + 1; buffer[i] != '\0'; i++) {
		if (buffer[i] == '\n' && (i - n) % nb != 0)
			return (84);
		else if (buffer[i] == '\n')
			n++;
	}
	return (0);
}

char **check(char *file_path)
{
	char *buffer = my_open(file_path);
	char **array = NULL;

	if (buffer == NULL)
		return (NULL);
	if (check_buffer(buffer) != 0) {
		my_putstr_error("Invalid map!\n");
		free(buffer);
		return (NULL);
	}
	array = str_to_array(buffer);
	free(buffer);
	if (array == NULL)
		return (NULL);
	return (array);
}
