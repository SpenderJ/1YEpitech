/*
** my_h.h for emacs in /home/jules/CPE/CPE_2016_matchstick
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Mon Feb 20 11:44:57 2017 Jules Spender
** Last update Tue Apr  4 15:51:04 2017 Jules Spender
*/

# ifndef MY_H_H
# define MY_H_H

# include <unistd.h>
# include <stdlib.h>
# include "gnl.h"

char    **map_generator(int line);
char    **map_creator(char **map, int line, int size, int fin) ;
int	main(int argc, char **av);
int     my_getnbr(char *str);
void    my_putchar(char c);
int     my_putstr(char *str);
int     my_strlen(char *str);
int	my_displayer(char **map, int size, int n);
int     game(char **map, char **argv);
char    **player_turn(char **map, char **argv, int i, int line);
char    **map_modifier(char **map, int line, int nbr);
int     param_verifierLine(int param, char **argv, char **map);
int     param_verifierMatches(int p, char **map, char **argv, int line);
int     my_put_nbr(int nb);
int     checkwin(char **map, int n);
void	print_error(int param);
char    **ia_turn(char **map, char **argv, int i, int a);
int	param_verifierline(int line, char **argv, char **map);
char    **bot3(char **map, int min, int maxsize, int i);
int     linefilled(char **map, int linenumber, int a);
int     blankline(char **map, int linenumber, int i);
char	**bot1(char **map, int min, int maxsize);
char    **finishthegame(char **map, int min, int compteur, int i);
char    **pray4thewin(char **map, int min);
void	my_printer(int compteur, int min);
char    *get_next_line(const int fd);

#endif /* MY_H_H_ */
