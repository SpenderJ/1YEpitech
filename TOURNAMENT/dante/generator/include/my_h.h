/*
** my_h.h for tetris in /home/hecto/PSU_2016_tetris
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Wed Mar  8 11:13:52 2017 blaise carnevillier
** Last update Fri May 12 13:52:37 2017 Jules Spender
*/

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <time.h>
# include <sys/types.h>

#ifndef MY_H_H
#define MY_H_H

char	**generate_liaison(char **map);
char	**change_map(char **map, int larg, int col);
char	**gennew_sol(char **map, int larg, int col);
int	main(int argc, char **argv);
void	my_putchar(char c);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
int	imperfect_maze(int col, int larg);
int	my_puterr(char *str, int ret);
char	**generate_x(int num, char **map);
char	**generate_sol(int larg, int col, char **map);
char	**genperfect_sol(int larg, int col, char **map);
int	perfect_maze(int larg, int col);
int	printmap(char **map);
char	**checkperfectmap(char **map);
int	ximp(char **map, int posX, int posY);
char	**be_perfect(int larg, int col, char **map);
int	gettonode(char **map, int *posY, int *posX);
void	free_map(char **map);

#endif /* MY_H_H */
