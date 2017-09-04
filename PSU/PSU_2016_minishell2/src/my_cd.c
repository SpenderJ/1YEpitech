/*
** my_cd.c for emacs in /home/jules/PSU/PSU_2016_minishell2/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Fri Apr  7 14:44:24 2017 Jules Spender
** Last update Sun Apr  9 17:04:36 2017 Jules Spender
*/

#include "my_h.h"

int	my_cd(char *str, t_info *info)
{
  int	i;
  char	**arr;
  char	**path;

  i = 0;
  arr = my_str_to_wordtab(str, ' ', 0);
  while (arr[i] != NULL)
    i = i + 1;
  if (cd_args(arr) != 0)
    return (2);
  if (i == 1 || (i == 2 && my_strcpy(arr[1], "~") == 0))
    path = my_path_finder(info->my_env, "HOME", '=');
  else if (i == 2 && arr[1][0] == '-' && arr[1][1] == '\0')
    path = my_path_finder(info->my_env, "OLDPWD", '=');
  else
    path = arr;
  if (access(path[1], F_OK) == -1)
    return (my_putsterr("error: Folder doesn't exist\n", 2));
  if (access(path[1], X_OK) == -1)
    return (my_putsterr("error: Check your rights on the folder\n", 2));
  if ((chdir(path[1])) == -1)
    return (my_putsterr("error: Can't access\n", 2));
  cd_env(info, path[1]);
  return (0);
}

int	cd_env(t_info *info, char *str)
{
  int	i;
  char	**tab;

  i = 0;
  tab = my_path_finder(info->my_env, "PWD", '=');
  info->my_env = my_env_adder(info->my_env, "OLDPWD", tab[1], 1);
  info->my_env = my_env_adder(info->my_env, "PWD", str, 1);
  return (0);
}

int	cd_args(char **arr)
{
  int	i;

  i = 0;
  while (arr[i] != NULL)
    i = i + 1;
  if (i > 2)
    return (my_putsterr("cd: Too many arguments.\n", 2));
  return (0);
}
