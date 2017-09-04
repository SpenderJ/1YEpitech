/*
** tetris_fonc.c for emacs in /home/jules/PSU/PSU_2016_tetris/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Thu Mar  2 18:45:40 2017 Jules Spender
** Last update Wed Mar 15 18:11:04 2017 Jules Spender
*/

#include "my_h.h"

int	tetris_level(char *str, t_info *info, char **argv, int i)
{
  int	n;
  int	a;

  n = 0;
  if (argv[i][1] == '-')
    {
      while (argv[i][n] != '=')
	n = n + 1;
      n = n + 1;
      info->level = my_getnbr(&argv[i][n]);
      return (n);
    }
  else
    info->level = my_getnbr(argv[i + 1]);
  return (n);
}

int     tetris_leftkey(char *str, t_info *info, char **argv, int i)
{
  int	n;

  n = 0;
  if (str[1] == '-')
    {
      while (str[n] != '=')
	n = n + 1;
      n = n + 1;
      info->leftkey = my_strdup(&argv[i][n]);
    }
  else
    info->leftkey = my_strdup(argv[i + 1]);
  return (n);
}

int	tetris_rightkey(char *str, t_info *info, char **argv, int i)
{
  int   n;

  n = 0;
  if (str[1] == '-')
    {
      while (str[n] != '=')
	n = n + 1;
      n = n + 1;
      info->rightkey = my_strdup(&argv[i][n]);
    }
  else
    {
      info->rightkey = my_strdup(argv[i + 1]);
    }
  return (n);
}

int	tetris_turn(char *str, t_info *info, char **argv, int i)
{
  int   n;

  n = 0;
  if (str[1] == '-')
    {
      while (str[n] != '=')
	n = n + 1;
      n = n + 1;
      info->turnkey = my_strdup(&argv[i][n]);
    }
  else
    {
      info->turnkey = my_strdup(argv[i + 1]);
    }
  return (n);
}

int	tetris_drop(char *str, t_info *info, char **argv, int i)
{
  int   n;

  n = 0;
  if (str[1] == '-')
    {
      while (str[n] != '=')
	n = n + 1;
      n = n + 1;
      info->dropkey = my_strdup(&argv[i][n]);
    }
  else
    {
      info->dropkey = my_strdup(argv[i + 1]);
    }
  return (n);
}
