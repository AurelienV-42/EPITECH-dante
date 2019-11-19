/*
** EPITECH PROJECT, 2022
** dante
** File description:
** Created by Aurélien Vandaele <aurelien.vandaele@epitech.eu>
*/

#include "generator.h"

char left(maze_t *maz, char **maze)
{
	if (maz->xm > 0 && (maze[maz->ym][maz->xm - 1] != '*' &&
		maze[maz->ym][maz->xm - 1] != '.') && (maz->xm - 2 < 0 ||
		(maze[maz->ym][maz->xm - 2] != '*' &&
			maze[maz->ym][maz->xm - 2] != '.')) &&
		(maz->ym + 1 > maz->y ||
			(maze[maz->ym + 1][maz->xm - 1] != '*' &&
				maze[maz->ym + 1][maz->xm - 1] != '.')) &&
		(maz->ym - 1 < 0 || (maze[maz->ym - 1][maz->xm - 1] != '*' &&
			maze[maz->ym - 1][maz->xm - 1] != '.')))
		return (1);
	return (0);
}

char right(maze_t *maz, char **maze)
{
	if (maz->xm < maz->x && maze[maz->ym][maz->xm + 1] != '*' &&
		maze[maz->ym][maz->xm + 1] != '.' && (maz->xm + 2 > maz->x ||
		(maze[maz->ym][maz->xm + 2] != '*' &&
			maze[maz->ym][maz->xm + 2] != '.')) &&
		(maz->ym + 1 > maz->y ||
			(maze[maz->ym + 1][maz->xm + 1] != '*' &&
				maze[maz->ym + 1][maz->xm + 1] != '.')) &&
		(maz->ym - 1 < 0 || (maze[maz->ym - 1][maz->xm + 1] != '*' &&
			maze[maz->ym - 1][maz->xm + 1] != '.')))
		return (1);
	return (0);
}

char bot(maze_t *maz, char **maze)
{
	if (maz->ym < maz->y && (maze[maz->ym + 1][maz->xm] != '*' &&
		maze[maz->ym + 1][maz->xm] != '.') && (maz->ym + 2 > maz->y ||
		(maze[maz->ym + 2][maz->xm] != '*' &&
			maze[maz->ym + 2][maz->xm] != '.')) &&
		(maz->xm + 1 > maz->x ||
			(maze[maz->ym + 1][maz->xm + 1] != '*' &&
				maze[maz->ym + 1][maz->xm + 1] != '.')) &&
		(maz->xm - 1 < 0 || (maze[maz->ym + 1][maz->xm - 1] != '*' &&
			maze[maz->ym + 1][maz->xm - 1] != '.')))
		return (1);
	return (0);
}

char top(maze_t *maz, char **maze)
{
	if (maz->ym > 0 && maze[maz->ym - 1][maz->xm] != '*' &&
		maze[maz->ym - 1][maz->xm] != '.' && (maz->ym - 2 < 0 ||
		(maze[maz->ym - 2][maz->xm] != '*' &&
			maze[maz->ym - 2][maz->xm] != '.')) &&
		(maz->xm + 1 > maz->x || (maze[maz->ym - 1][maz->xm + 1] != '*'
			&& maze[maz->ym - 1][maz->xm + 1] != '.')) &&
		(maz->xm - 1 < 0 || (maze[maz->ym - 1][maz->xm - 1] != '*'
			&& maze[maz->ym - 1][maz->xm - 1] != '.')))
		return (1);
	return (0);
}