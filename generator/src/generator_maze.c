/*
** EPITECH PROJECT, 2018
** Generator Dante
** File description:
** Aurélien Vandaële
*/

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "my.h"
#include "generator.h"

static void add_star(maze_t *maz, int n, int nb)
{
	maz->xm += n;
	maz->ym += nb;
	maz->maze[maz->ym][maz->xm] = '*';
}

static char **malloc_maze(int x, int y)
{
	char **maze = malloc(sizeof(char *) * (y + 1));

	if (maze == NULL)
		return (NULL);
	for (int i = 0; i != y; i++) {
		maze[i] = malloc(sizeof(char) * (x + 1));
		if (maze[i] == NULL)
			return (NULL);
		for (int nb = 0; nb != x; nb++)
			maze[i][nb] = 'X';
		maze[i][x] = '\0';
	}
	maze[y] = NULL;
	return (maze);
}

static void condition(maze_t *maz, char **maze)
{
	if ((maz->ym + 1 == maz->y && maz->xm == maz->x) ||
		(bot(maz, maze) == 1 && rand() % 2 == 1)) {
		add_star(maz, 0, 1);
		return;
	}
	if ((maz->xm + 1 == maz->x && maz->ym == maz->y) ||
		(right(maz, maze) == 1 && rand() % 2 == 1)) {
		add_star(maz, 1, 0);
		return;
	}
	if (top(maz, maze) == 1 && rand() % 2 == 1) {
		add_star(maz, 0, -1);
		return;
	}
	if (left(maz, maze) == 1 && rand() % 2 == 1) {
		add_star(maz, -1, 0);
		return;
	}
	second_step(maz, maze);
}

static void create_maze(maze_t *maze)
{
	maze->maze[0][0] = '*';
	while (maze->xm != maze->x || maze->ym != maze->y)
		condition(maze, maze->maze);
	maze->maze[maze->y][maze->x] = '*';
	for (int i = 0; i < maze->y + 1; i++)
		for (int n = 0; n < maze->x + 1; n++)
			maze->maze[i][n] == '.'? maze->maze[i][n] = '*' :0;
}

int generator_maze(int x, int y, char perfect)
{
	maze_t maze;
	maze.maze = malloc_maze(x, y);

	if (maze.maze == NULL)
		return (84);
	maze.x = x - 1;
	maze.y = y - 1;
	maze.xm = 0;
	maze.ym = 0;
	srand(getpid());
	create_maze(&maze);
	if (perfect == 0)
		imperfect_maze(&maze);
	print_my_array(maze.maze);
	my_free_array(maze.maze);
	return (0);
}
