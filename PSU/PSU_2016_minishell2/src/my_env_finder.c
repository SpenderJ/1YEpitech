/*
** my_env_finder.c for emacs in /home/jules/PSU/PSU_2016_minishell1
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Fri Jan 20 10:42:26 2017 Jules Spender
** Last update Sun Apr  9 14:17:55 2017 Jules Spender
*/

#include "my_h.h"

char	**my_env_finder(char **env)
{
  int	i;
  char	**array;

  i = 0;
  if (env == NULL)
    return (NULL);
  while (env[i] != NULL)
    i = i + 1;
  if ((array = malloc(sizeof(char*) * (i + i))) == NULL)
    return (NULL);
  i = 0;
  while (env[i] != NULL)
    {
      array[i] = my_strdup(env[i]);
      i = i + 1;
    }
  return (array);
}

char	**my_path_finder(char **env, char *str, char separator)
{
  int	i;
  int	l;
  char	**array;

  if (env == NULL)
    return (NULL);
  l = my_strlen(str);
  i = 0;
  while (env[i] != NULL)
    {
      if (my_strncmp(str, env[i], l) == 0)
	{
	  array = my_str_to_wordtab(env[i], separator, 0);
	  return (array);
	}
      i = i + 1;
    }
  return (array);
}

char	**my_env_adder(char **env, char *strtoadd, char *content, int overwrite)
{
  int	i;
  char	**newenv;
  int	a;

  i = 0;
  while (env[i] != NULL)
    i = i + 1;
  if ((newenv = malloc(sizeof(char*) * (i + i + 2))) == NULL)
    return (NULL);
  i = -1;
  while (env[++i] != NULL)
    newenv[i] = env[i];
  a = my_strlen(strtoadd) - 1;
  i = -1;
  while (env[++i] != NULL && my_strncmp(env[i], strtoadd, a) != 0);
  if (overwrite != 0 || env[i] == NULL)
    {
      newenv[i] = my_strcat("=", strtoadd);
      if (content != NULL && overwrite != 0)
	newenv[i] = my_strcat(content, newenv[i]);
    }
  return (newenv);
}

char	**my_env_remover(char **env, char *str)
{
  int	i;
  int	a;
  char	**newenv;

  i = 0;
  while (env[i] != NULL)
    i = i + 1;
  if ((newenv = malloc(sizeof(char*) *(i + i + 2))) == NULL)
    return (NULL);
  i = -1;
  a = my_strlen(str) - 1;
  while (env[++i] != NULL && my_strncmp(env[i], str, a) != 0)
    newenv[i] = env[i];
  a = i;
  a = a + 1;
  while (env[a] != NULL)
    {
      newenv[i] = env[a];
      i = i + 1;
      a = a + 1;
    }
  newenv[i] = NULL;
  return (newenv);
}
