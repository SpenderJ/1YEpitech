/*
** my_env_finder.c for emacs in /home/jules/PSU/PSU_2016_minishell1
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Fri Jan 20 10:42:26 2017 Jules Spender
** Last update Sun Jan 22 21:44:26 2017 Jules Spender
*/

#include "my_h.h"

char	**my_env_finder(char **env)
{
  int	i;
  char	**array;

  i = 0;
  while (env[i]!= '\0')
    {
      if (env[i][0] == 'P' && env[i][1] == 'A' &&
	  env[i][2] == 'T' && env[i][3] == 'H')
	array = my_str_to_wordtab(env[i], ':');
      i = i + 1;
    }
  return (array);
}
