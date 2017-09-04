/*
** tetris_option_choose.c for emacs in /home/jules/PSU/PSU_2016_tetris
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Feb 28 13:37:46 2017 Jules Spender
** Last update Sun Mar 19 11:20:28 2017 Jules Spender
*/

#include "my_h.h"

int	tetris_option_choose(int argc, char **argv, t_info *info, int n)
{
  int	debug;
  int	i;
  char	***tetriminos;

  i = help_detector(argv);
  if (i == 1)
    return (tetris_help(argv));
  i = 1;
  while (argv[i] != NULL)
    {
      n = tetris_flag_modifier(argv[i], info, argv, i);
      if (n == -30)
	debug = -1821;
      if (n == 84)
	return (84);
      if (argv[i][1] == '-' || argv[i][1] == 'd' || argv[i][1] == 'w')
	i = i + 1;
      else
	i = i + 2;
    }
  if (debug == -1821)
    tetriminos = launch_debug(info);
  return (0);
}

int	help_detector(char **argv)
{
  int	i;

  i = 1;
  while (argv[i] != NULL)
    {
      if (my_strcpy(argv[i], "--help") == 0)
	return (1);
      else
	i = i + 1;
    }
  return (0);
}

int	tetris_flag_modifier(char *str, t_info *info, char **argv, int i)
{
  int	n;

  n = 84;
  if ((my_strcpy(str, "-l") == 0) || (my_strncmp(str, "--level=") == 0))
    n = tetris_level(str, info, argv, i);
  if ((my_strcpy(str, "-kl") == 0) || (my_strncmp(str, "--key-left=") == 0))
    n = tetris_leftkey(str, info, argv, i);
  if ((my_strcpy(str, "-kr") == 0) || (my_strncmp(str, "--key-right=") == 0))
    n = tetris_rightkey(str, info, argv, i);
  if ((my_strcpy(str, "-kt") == 0) || (my_strncmp(str, "--key-turn=") == 0))
    n = tetris_turn(str, info, argv, i);
  if ((my_strcpy(str, "-kd") == 0) || (my_strncmp(str, "--key-drop=") == 0))
    n = tetris_drop(str, info, argv, i);
  if ((my_strcpy(str, "-kq") == 0) || (my_strncmp(str, "--key-quit=") == 0))
    n = tetris_quit(str, info, argv, i);
  if ((my_strcpy(str, "-kp") == 0) || (my_strncmp(str, "--key-pause=") == 0))
    n = tetris_pause(str, info, argv, i);
  if (my_strncmp(str, "--map-size=") == 0)
    n = tetris_map(str, info, argv, i);
  if ((my_strcpy(str, "-w") == 0) || (my_strncmp(str, "--without-next") == 0))
    n = tetris_next(str, info, argv, i);
  if ((my_strcpy(str, "-d") == 0) || (my_strncmp(str, "--debug") == 0))
    n = tetris_debug(str, info, argv, i);
  return (n);
}
