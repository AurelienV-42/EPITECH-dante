/*
** EPITECH PROJECT, 2022
** Game Of Life
** File description:
** File which open the filepath and return the buffer
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

char *my_open(char *filepath)
{
	struct stat stru;
	int fd = 0;
	int size = 0;
	char *buffer = NULL;

	fd = open(filepath, O_RDONLY);
	if (fd == -1) {
		my_putstr_error("Invalid filepath\n");
		return (NULL);
	}
	stat(filepath, &stru);
	buffer = malloc(sizeof(char) * stru.st_size + 2);
	size = stru.st_size;
	read(fd, buffer, size);
	if (buffer[my_strlen(buffer) - 1] == '\n')
		return (NULL);
	buffer[size] = '\n';
	buffer[size + 1] = '\0';
	close(fd);
	return (buffer);
}
