/*
** EPITECH PROJECT, 2022
** dante
** File description:
** Created by Aurélien Vandaele <aurelien.vandaele@epitech.eu>
*/

#include <stdlib.h>
#include "generator.h"

static char condition_imperfect(maze_t *maze)
{
	for (int i = 0; i < maze->y; i++)
		for (int nb = 0; nb < maze->x; nb++)
			if (maze->maze[i][nb] == '*' && (i + 1 < maze->y &&
				maze->maze[i + 1][nb] == '*') &&
				(nb + 1 < maze->x &&
					maze->maze[i][nb + 1] == '*') &&
				maze->maze[i + 1][nb + 1] == '*')
				return (1);
	return (0);
}

void imperfect_maze(maze_t *maze)
{
	while (condition_imperfect(maze) != 1)
		maze->maze[rand() % (maze->y +1)][rand() % (maze->x + 1)] = '*';
}