/*
** my_h.h for tetris in /home/hecto/PSU_2016_tetris
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Wed Mar  8 11:13:52 2017 blaise carnevillier
** Last update Tue Jun 13 14:20:32 2017 Jules Spender
*/

# include <stdio.h>
# include <ncurses.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <time.h>
# include <string.h>
# include <dirent.h>
# include <unistd.h>
# include <stdlib.h>
# include "gnl.h"

#ifndef MY_H_H
#define MY_H_H

# ifndef READ_SIZE
#  define READ_SIZE 1024
# endif

typedef struct s_coord
{
  int x;
  int y;
}	t_coord;
typedef struct t_info
{
  int	level;
  int	score;
  int	speed;
  int	new;
  int	mapsizerow;
  int	mapsizecol;
  char	*leftkey;
  char	*rightkey;
  char	*turnkey;
  char	*dropkey;
  char	*quitkey;
  char	*pausekey;
  char	*hidekey;
}	t_info;

char	**t_tab_down(char**, char**, char**, t_info*);
char	**clear_t_tab(t_info*);
void	win_size(t_info*);
int	wait_touch();
char	**move_right(char**, char**, char**, t_info*);
char	**move_left(char**, char**, char**, t_info*);
char	**t_tab_down(char**, char**, char**, t_info*);
char	**movement(char**, char**, t_info*);
int	end_game(t_info *info);
char    ***verif_tetris2(int a, char ***tetriminos, int largeur, int longeur);
char	***verif_tetris3(int a, int res, int largeur, char ***tetriminos);
char	***verif_tetris(int a, char ***tetriminos, int largeur, int longeur);
char    **modif_char(char **tab);
int	get_withd(char**);
int	get_height(char**);
char	**get_moves(char**, char**);
char	**choose_nxt(char***,int,int,int);
char	**cpy_tab(char**,t_info*);
char	**put_tetriminos(char **,char **, char**, t_info*);
char    **stardisplayer(char **array, int n, int a);
int	verif_string(char *s, int i);
char	***triplearray3(int fd, char *s, int a, char ***tetriminos);
int	display_next(int, char**, int);
int	init_play(t_info*, char ***tetriminos);
char	***triplearray2(int fd, int i, int a, char ***tetriminos);
char	***print_tetriminos(char *name);
int	display(t_info*, char**, char**);
char    *get_next_line(const int fd);
char    *my_strcat(char *dest, char *src);
char    ***triplearray(char **filename, int i, int fd, int a);
char    **fillarray(int size, int i, int fd, int a);
char    ***declarechar(char *name);
void    my_swap(char **src, int i);
char    **my_sort_wordtab(char **tab, int i, int a);
char    ***declarechar(char *name);
int     my_put_nbr(int nb);
void    my_putstrspecial(char *str);
char    *my_strdup(char *src);
int	help_detector(char **argv);
void    declarestruct(t_info *info);
int	my_printf(char*, ...);
int     tetris_help(char **argv);
int     my_strcpy(char *dest, char *src);
int     main(int argc, char **argv);
int     tetris_option_choose(int argc, char **argv, t_info *info, int n);
void    my_putchar(char c);
int     my_putstr(char *str);
int     my_strlen(char *str);
int     my_getnbr(char *str);
int     my_strncmp(char *dest, char *src);
int     tetris_flag_modifier(char *str, t_info *info, char **argv, int i);
int     tetris_leftkey(char *str, t_info *info, char **argv, int i);
int     tetris_level(char *str, t_info *info, char **argv, int i);
int     tetris_drop(char *str, t_info *info, char **argv, int i);
int     tetris_turn(char *str, t_info *info, char **argv, int i);
int     tetris_rightkey(char *str, t_info *info, char **argv, int i);
int     tetris_quit(char *str, t_info *info, char **argv, int i);
int     tetris_pause(char *str, t_info *info, char **argv, int i);
int     tetris_map(char *str, t_info *info, char **argv, int i);
int     tetris_next(char *str, t_info *info, char **argv, int i);
int     tetris_debug(char *str, t_info *info, char **argv, int i);
char	***launch_debug(t_info *info);
char	*modif_name(char *str);

#endif
