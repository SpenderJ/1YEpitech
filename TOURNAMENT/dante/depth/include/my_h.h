/*
** my_h.h for emacs in /home/jules/TOURNAMENT/dante/depth/include
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Thu Apr 20 17:57:55 2017 Jules Spender
** Last update Fri Apr 21 20:02:19 2017 Jules Spender
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

int	main(int argc, char **argv);
int	depth_yless(char **array, int x, int y, int *stat);
int	depth_ysup(char **array, int x, int y, int *stat);
int	depth_xless(char **array, int x, int y, int *stat);
int	depth_xsup(char **array, int x, int y, int *stat);
int	resolve(char **arr);
char	**clean_map(char **map);
int	depth_search(char **array, int x, int y, int *stat);
int	printtab(char **map);
void	my_putchar(char c);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
int	my_puterr(char *str, int ret);
int	check_map(char **map);
char	**get_maze(char *str);
char	*fill_line(char *buf, char *line, int *i, int j);
char	*my_realloc(char *str, int size);
char	*malloc_or_realloc(char *line, int *j, int *realloc, int size);
char	*create_line(char *buf, int readsize);
char	*get_next_line(const int fd);

#endif /* MY_H_H */
