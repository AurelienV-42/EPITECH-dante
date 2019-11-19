/*
** EPITECH PROJECT, 2022
** dante
** File description:
** Created by Aurélien Vandaele <aurelien.vandaele@epitech.eu>
*/

#include "solver.h"

char left(maze_t *maz, char **maze, char symbol)
{
	if (maz->xm > 0 && (maze[maz->ym][maz->xm - 1] == symbol &&
		maze[maz->ym][maz->xm - 1] != '.'))
		return (1);
	return (0);
}

char right(maze_t *maz, char **maze, char symbol)
{
	if (maz->xm + 1 < maz->x && maze[maz->ym][maz->xm + 1] == symbol &&
		maze[maz->ym][maz->xm + 1] != '.')
		return (1);
	return (0);
}

char bot(maze_t *maz, char **maze, char symbol)
{
	if (maz->ym + 1 < maz->y && (maze[maz->ym + 1][maz->xm] == symbol &&
		maze[maz->ym + 1][maz->xm] != '.'))
		return (1);
	return (0);
}

char top(maze_t *maz, char **maze, char symbol)
{
	if (maz->ym > 0 && maze[maz->ym - 1][maz->xm] == symbol &&
		maze[maz->ym - 1][maz->xm] != '.')
		return (1);
	return (0);
}