/*
** ncurse.c for tetris in /home/hecto/PSU_2016_tetris/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Thu Mar  9 12:59:47 2017 blaise carnevillier
** Last update Tue Mar 21 10:28:55 2017 blaise carnevillier
*/

#include "my_h.h"

int	my_strcmp(char *move, char *str)
{
  int	i;

  i = 0;
  while (move[i] != '\0' && str[i] != '\0')
    {
      if (move[i] != str[i])
	return (0);
      i++;
    }
  if (move[i] == '\0' && str[i] == '\0')
    return (1);
  else
    return (0);
      
}

char	**movement(char **t_tab, char **tab, t_info *info)
{
  int move;
  //char move[15];

  //getstr(move);
  move = getch();
  //if (my_strcmp(move, "q") == 1)
  if (move == 'a')
    {
      endwin();
      exit(0);
    }
  //  if (my_strcmp(move, info->dropkey) == 1)
  else if (move == 's')
    {
      while ((t_tab = t_tab_down(t_tab, t_tab, tab, info)) != NULL)
	get_moves(t_tab, tab);
      info->new = 1;
    }
  else if (move == 'd')
    {
      t_tab = move_right(t_tab, t_tab, tab, info);
      get_moves(t_tab, tab);
    }
  else if (move == 'q')
    {
      t_tab = move_left(t_tab, t_tab, tab, info);
      get_moves(t_tab, tab);
      info->new = 0;
    }
      return (tab);
  
}
