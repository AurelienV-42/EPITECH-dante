/*
** EPITECH PROJECT, 2018
** Generator Dante
** File description:
** Aurélien Vandaële
*/

#include "my.h"
#include "solver.h"

static char add_path(maze_t *maz, int n, int nb, char add)
{
	maz->xm += n;
	maz->ym += nb;
	if (add == 1)
		maz->maze[maz->ym][maz->xm] = 'o';
	return (0);
}

static char back_tracker(maze_t *maz)
{
	if (left(maz, maz->maze, '*') == 1)
		return (add_path(maz, -1, 0, 1));
	if (top(maz, maz->maze, '*') == 1)
		return (add_path(maz, 0, -1, 1));
	if (right(maz, maz->maze, '*') == 1)
		return (add_path(maz, 1, 0, 1));
	if (bot(maz, maz->maze, '*') == 1)
		return (add_path(maz, 0, 1, 1));
	maz->maze[maz->ym][maz->xm] = '.';
	if (right(maz, maz->maze, 'o') == 1)
		return (add_path(maz, 1, 0, 0));
	if (bot(maz, maz->maze, 'o') == 1)
		return (add_path(maz, 0, 1, 0));
	if (left(maz, maz->maze, 'o') == 1)
		return (add_path(maz, -1, 0, 0));
	if (top(maz, maz->maze, 'o') == 1)
		return (add_path(maz, 0, -1, 0));
	return (0);
}

char **solver_maze(char **maze)
{
	maze_t maz;
	maz.maze = maze;
	maz.x = my_strlen(maze[0]);
	maz.y = my_strlen_array(maze);
	maz.xm = 0;
	maz.ym = 0;
	maz.maze[maz.ym][maz.xm] = 'o';

	while (maz.xm != maz.x - 1 || maz.ym != maz.y - 1)
		back_tracker(&maz);
	for (int i = 0; i < maz.y; i++)
		for (int n = 0; n < maz.x; n++)
			maz.maze[i][n] == '.'? maz.maze[i][n] = '*' :0;
	return (maz.maze);
}
