/*
** EPITECH PROJECT, 2022
** dante
** File description:
** Created by Aurélien Vandaele <aurelien.vandaele@epitech.eu>
*/

#include "generator.h"

void second_step_right_bot(maze_t *maz, char **maze)
{
	if (maz->ym < maz->y && maze[maz->ym + 1][maz->xm] == '*' &&
		maze[maz->ym + 1][maz->xm] != '.') {
		maz->maze[maz->ym][maz->xm] = '.';
		maz->ym++;
		return;
	}
	if (maz->xm < maz->x && maze[maz->ym][maz->xm + 1] == '*' &&
		maze[maz->ym][maz->xm + 1] != '.') {
		maz->maze[maz->ym][maz->xm] = '.';
		maz->xm++;
	}
}

void second_step(maze_t *maz, char **maze)
{
	if (left(maz, maze) != 1 && bot(maz, maze) != 1 &&
		top(maz, maze) != 1 && right(maz, maze) != 1) {
		if (maz->ym > 0 && maze[maz->ym - 1][maz->xm] == '*' &&
			maze[maz->ym - 1][maz->xm] != '.') {
			maz->maze[maz->ym][maz->xm] = '.';
			maz->ym--;
			return;
		}
		if (maz->xm > 0 && maze[maz->ym][maz->xm - 1] == '*' &&
			maze[maz->ym][maz->xm - 1] != '.') {
			maz->maze[maz->ym][maz->xm] = '.';
			maz->xm--;
			return;
		}
		second_step_right_bot(maz, maze);
	}
}