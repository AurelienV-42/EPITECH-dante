/*
** EPITECH PROJECT, 2022
** PSU_tetris_2017
** File description:
** Created by Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#ifndef GENERATOR_H
#define GENERATOR_H

typedef struct {
	char **maze;
	int x;
	int y;
	int xm;
	int ym;
} maze_t;

int generator_maze(int, int, char);
int algorithm(char **, int, int);
char top(maze_t *maz, char **maze);
char bot(maze_t *maz, char **maze);
char right(maze_t *maz, char **maze);
char left(maze_t *maz, char **maze);
void second_step(maze_t *maz, char **maze);
void imperfect_maze(maze_t *maze);
void print_my_array(char **);

#endif //GENERATOR_H
