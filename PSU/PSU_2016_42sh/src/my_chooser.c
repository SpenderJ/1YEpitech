/*
** my_chooser.c for emacs in /home/jules/PSU/PSU_2016_minishell2/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Fri Apr  7 15:02:59 2017 Jules Spender
** Last update Sun May 21 17:19:21 2017 blaise carnevillier
*/

#include "my_h.h"

int	my_chooser(char **array, int i, t_info *info)
{
  int	val;

  while (array[i] != NULL)
    {
      val = manual_command(array, i, info);
      if (val == -30071998)
	val = path_finder(array[i], info);
      if (val == -30071998)
	my_putsterr(array[i], ": Command not found.\n", 1);
      if (array[i + 1] != NULL && my_strcmp(array[i + 1], "||") == SUCCESS &&
	  val == 0)
	return (SUCCESS);
      else if (array[i + 1] != NULL && my_strcmp(array[i + 1], "||") == SUCCESS)
	i = i + 1;
      else if (val == -30071998)
	return (1);
      else if (val != 0)
	return (val);
      i = i + 1;
    }
  return (SUCCESS);
}

int	manual_command(char **array, int i, t_info *info)
{
  int	val;

  val = -30071998;
  if (my_strncmp(array[i], "cd ", 3) == SUCCESS ||
      (my_strcmp(array[i], "cd") == SUCCESS))
    val = my_cd(array[i], info);
  else if (my_strncmp(array[i], "setenv ", 7) == SUCCESS ||
	   (my_strcmp(array[i], "setenv") == SUCCESS))
    val = my_setenv(array[i], info);
  else if (my_strncmp(array[i], "unsetenv ", 9) == SUCCESS ||
	   (my_strcmp(array[i], "unsetenv") == SUCCESS))
    val = my_unsetenv(array[i], info);
  else if ((my_strncmp(array[i] , "exit ", 5) == SUCCESS && array[i][4] == '\0')
	   || (my_strcmp(array[i], "exit") == SUCCESS))
    return (my_exit(array[i]));
  else if ((my_strncmp(array[i] , "env ", 4) == SUCCESS && array[i][4] == '\0')
	   || (my_strcmp(array[i], "env ") == SUCCESS))
    return (my_setenv(NULL, info));
  else if (array[i][0] == ';')
    val = 0;
  return (val);
}

int	path_finder(char *str, t_info *info)
{
  int	i;
  char	**arr;
  char	**path;

  i = 0;
  arr = my_str_to_wordtab(str, ' ', 0);
  path = my_path_finder(info->my_env, "PATH", ':');
  while (path[0][i + 5] != '\0')
    {
      path[0][i] = path[0][i + 5];
      i = i + 1;
    }
  path[0][i] = '\0';
  info->key = 0;
  i = my_exec(path, arr, info, 0);
  if (i == SUCCESS || i == FAILURE)
    return (SUCCESS);
  if ((str[0] == '.' || str[0] == '/') &&
      (i = prog_launcher(str, arr, info)) == SUCCESS)
    return (SUCCESS);
  else
    return (-30071998);
}

int	prog_launcher(char *str, char **arr, t_info *info)
{
  pid_t		pid;
  int		wait_status;

  if (access(str, F_OK) == SUCCESS && access(str, X_OK) == SUCCESS &&
      access(str, R_OK) == SUCCESS)
    {
      pid = fork();
      if (pid == 0)
	{
	  if ((execve(str, arr, info->my_env)) == 1)
	    return (info->key = 1);
	}
      else
	{
	  wait(&wait_status);
	  return (info->key);
	}
    }
  else if (access(str, X_OK) == ERROR || access(str, R_OK) == ERROR)
    return (my_putsterr(str, ": Permission denied.\n", 1));
  else
    return (my_putsterr(str, ": Unknown command.\n", 1));
}

int	my_exec(char **path, char **arr, t_info *info, int i)
{
  pid_t		pid;
  int		wait_status;

  while (path[i] != NULL)
    {
      if ((path[i] = my_strcat("/", path[i])) == NULL || arr == NULL ||\
	  arr[0] == NULL || (path[i] = my_strcat(arr[0], path[i])) == NULL)
	return (FAILURE);
      if (access(path[i], F_OK) != ERROR && access(path[i], X_OK) != ERROR)
	{
	  if ((pid = fork()) == 0)
	    {
	      if ((execve(path[i], arr, info->my_env)) == ERROR)
		return (info->key = 1);
	    }
	  else
	    {
	      wait (&wait_status);
	      return (info->key);
	    }
	}
      else
	i = i + 1;
    }
  return (1);
}
