/*
** tetris_fonc2.c for emacs in /home/jules/PSU/PSU_2016_tetris/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Fri Mar  3 13:09:30 2017 Jules Spender
** Last update Wed Mar 15 18:12:59 2017 Jules Spender
*/

#include "my_h.h"

int     tetris_quit(char *str, t_info *info, char **argv, int i)
{
  int   n;

  n = 0;
  if (str[1] == '-')
    {
      while (str[n] != '=')
	n = n + 1;
      n = n + 1;
      info->quitkey = my_strdup(&argv[i][n]);
    }
  else
    {
      info->quitkey = my_strdup(argv[i + 1]);
    }
  return (0);
}

int     tetris_pause(char *str, t_info *info, char **argv, int i)
{
  int   n;

  n = 0;
  if (str[1] == '-')
    {
      while (str[n] != '=')
	n = n + 1;
      n = n + 1;
      info->pausekey = my_strdup(&argv[i][n]);
    }
  else
    {
      info->pausekey = my_strdup(argv[i + 1]);
    }
  return (0);
}

int	tetris_map(char *str, t_info *info, char **argv, int i)
{
  int	n;

  n = 0;
  while (str[n] != '=' && str[n] != '\0')
    n = n + 1;
  if (str[n] == '\0')
    return (84);
  n = n + 1;
  info->mapsizerow = my_getnbr(&argv[i][n]);
  while (str[n] != ',' && str[n] != '\0')
    n = n + 1;
  if (str[n] == '\0')
    return (84);
  n = n + 1;
  info->mapsizecol = my_getnbr(&argv[i][n]);
  return (0);
}

int	tetris_next(char *str, t_info *info, char **argv, int i)
{
  int	n;

  n = 0;
  if ((info->hidekey = malloc(sizeof(char) * 3)) == NULL)
    return (-1);
  info->hidekey[0] = 'N';
  info->hidekey[1] = 'o';
  info->hidekey[2] = '\0';
  return (0);
}

int	tetris_debug(char *str, t_info *info, char **argv, int i)
{
  return (-1);
}
