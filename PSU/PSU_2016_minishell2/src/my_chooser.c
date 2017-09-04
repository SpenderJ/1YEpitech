/*
** my_chooser.c for emacs in /home/jules/PSU/PSU_2016_minishell2/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Fri Apr  7 15:02:59 2017 Jules Spender
** Last update Wed May 17 14:19:19 2017 Jules Spender
*/

#include "my_h.h"

int	my_chooser(char **array, int i, t_info *info)
{
  int	val;

  while (array[i] != NULL)
    {
      printf("Array[i] = '%s'\n", array[i]);
      if (my_strncmp(array[i], "cd ", 3) == 0 ||
	  (my_strncmp(array[i], "cd\0", 3) == 0))
	val = my_cd(array[i], info);
      else if (my_strncmp(array[i], "setenv ", 7) == 0 ||
	       (my_strncmp(array[i], "setenv\0", 7) == 0))
	val = my_setenv(array[i], info);
      else if (my_strncmp(array[i], "unsetenv ", 9) == 0 ||
	       (my_strncmp(array[i], "unsetenv\0", 9) == 0))
	val = my_unsetenv(array[i], info);
      else if ((my_strncmp(array[i] , "exit", 4) == 0 && array[i][4] == '\0')
	       || (my_strncmp(array[i], "exit ", 5) == 0))
	return (my_exit(array[i]));
      else if (array[i][0] == ';' || array[i][0] == '|' || array[i][0] == '&')
	val = 0;
      else
	val = path_finder(array[i], info);
      if (val != 0)
	return (val);
      i = i + 1;
    }
  return (0);
}

int	path_finder(char *str, t_info *info)
{
  int	i;
  char	**arr;
  char	**path;
  int	res;

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
  res = my_exec(path, arr, info, 0);
  if (res == 0)
    return (0);
  else
    return (1);
}

int	my_exec(char **path, char **arr, t_info *info, int i)
{
  pid_t		pid;
  int		wait_status;
  
  while (path[i] != NULL)
    {
      path[i] = my_strcat("/", path[i]);
      path[i] = my_strcat(arr[0], path[i]);
      if (access(path[i], F_OK) != -1 && access(path[i], X_OK) != -1)
	{
	  pid = fork();
	  if (pid == 0)
	    {
	      if ((execve(path[i], arr, info->my_env)) == -1)
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
