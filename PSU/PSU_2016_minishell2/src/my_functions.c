/*
** my_functions.c for emacs in /home/jules/PSU/PSU_2016_minishell2/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Fri Apr  7 15:18:32 2017 Jules Spender
** Last update Sun Apr  9 16:43:03 2017 Jules Spender
*/

#include "my_h.h"

int	my_setenv(char *str, t_info *info)
{
  int	i;
  char	**array;
  int	val;

  i = 0;
  array = my_str_to_wordtab(str, ' ', 0);
  val = 0;
  while (array[i] != NULL)
    i = i + 1;
  if (i > 3)
    return (my_putsterr("error: Wrong Number of arguments\n", 2));
  if (i == 1)
    return (my_printtab(info->my_env));
  if (i == 4)
    {
      if ((val = my_getnbr(array[3])) == -30071998)
	return (my_putsterr("error: Wrong Arguments\n", 2));
    }
  if (i == 2)
    info->my_env = my_env_adder(info->my_env, array[1], NULL, 1);
  else if (i == 3)
    info->my_env = my_env_adder(info->my_env, array[1], array[2], 1);
  else if (i == 4)
    info->my_env = my_env_adder(info->my_env, array[1], array[2], val);
  return (0);
}

int	my_printtab(char **arr)
{
  int	i;

  i = 0;
  while (arr[i] != NULL)
    {
      my_putstr(arr[i]);
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}

int	my_unsetenv(char *str, t_info *info)
{
  int	i;
  char	**array;

  i = 0;
  array = my_str_to_wordtab(str, ' ', 0);
  while (array[i] != NULL)
    i = i + 1;
  if (i > 2)
    return (my_putsterr("error: Wrong Number of arguments\n", 2));
  if (i == 1)
    return (0);
  else if (i == 2)
    info->my_env = my_env_remover(info->my_env, array[1]);
  return (0);
}

int	my_exit(char *str)
{
  return (123);
}
