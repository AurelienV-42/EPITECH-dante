/*
** EPITECH PROJECT, 2022
** dante
** File description:
** Created by Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#ifndef SOLVER_H
#define SOLVER_H

typedef struct {
	char **maze;
	int x;
	int y;
	int xm;
	int ym;
} maze_t;

char **check(char *file_path);
char **solver_maze(char **maze);
char *my_open(char *filepath);
char **str_to_array(char *str);
char top(maze_t *maz, char **maze, char symbol);
char bot(maze_t *maz, char **maze, char symbol);
char right(maze_t *maz, char **maze, char symbol);
char left(maze_t *maz, char **maze, char symbol);
void print_my_array(char **);
#endif //SOLVER_H
