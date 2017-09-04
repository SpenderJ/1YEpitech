/*
** my_h.h for emacs in /home/jules/TOURNAMENT/dante/breadth/include
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Apr 24 17:14:42 2017 Jules Spender
** Last update Fri May 12 16:05:39 2017 Jules Spender
*/

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <time.h>
# include <sys/types.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>

#ifndef MY_H_H
#define MY_H_H

# ifndef READ_SIZE
#  define READ_SIZE 1024
# endif

void	edit_tab(int **tab, int larg, int col);
void	set_tab(char **arr, int **tab, int larg, int col);
int	breadth_search(char **arr, int **tab, int larg, int col);
int	main(int argc, char **argv);
int	printtab(char **map);
void	my_putchar(char c);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
int	my_puterr(char *str, int ret);
char	*get_next_line(const int fd);
char	**get_maze(char *str);
int	check_map(char **map);
int	resolve(char **map);

#endif /* MY_H_H */
