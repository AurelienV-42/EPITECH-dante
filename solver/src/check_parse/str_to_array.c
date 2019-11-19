/*
** EPITECH PROJECT, 2022
** Game Of Life
** File description:
** File which convert the str from the filepath to a new malloc array
*/

#include <stdlib.h>
#include "my.h"

static int get_columns(char const *str)
{
	int i;

	for (i = 0; str && str[i] != '\0' && str[i] != '\n'; i++);
	return (i);
}

static int get_lines(char const *str)
{
	int i;
	int result = 0;

	for (i = 0; str && str[i] != '\0'; i++)
		if (str[i] == '\n')
			result++;
	return (result);
}

static char **malloc_array(int lines, int columns)
{
	char **result = malloc(sizeof(char *) * (lines + 1));

	if (result == NULL)
		return (NULL);
	for (int i = 0; i < lines; i++) {
		result[i] = malloc(sizeof(char) * (columns + 1));
		if (result[i] == NULL)
			return (NULL);
		result[i][columns] = '\0';
	}
	result[lines] = NULL;
	return (result);
}

static void fill_array(char *buffer, char **array, int lines)
{
	int i = 0;
	int nb = 0;

	for (int n = 0; n < lines; n++) {
		for (; buffer[i] != '\0' && buffer[i] != '\n'; i++) {
			array[n][nb] = buffer[i];
			nb++;
		}
		i++;
		nb = 0;
	}
}

char **str_to_array(char *str)
{
	int columns = get_columns(str);
	int lines = get_lines(str);
	char **array = malloc_array(lines, columns);

	if (array == NULL)
		return (NULL);
	fill_array(str, array, lines);
	return (array);
}
