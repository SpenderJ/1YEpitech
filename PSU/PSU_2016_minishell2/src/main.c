
/*
** main.c for emacs in /home/jules/PSU/PSU_2016_minishell2
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Mar 21 10:32:28 2017 Jules Spender
** Last update Sun Apr  9 22:40:36 2017 Jules Spender
*/

#include "my_h.h"

int	main(int argc, char **argv, char **env)
{
  t_info	info;
  int		returned;
  t_node	*arbre;
  int		lastval;

  arbre = NULL;
  lastval = -30071998;
  if (env != NULL)
    info.my_env = my_env_finder(env);
  while (42)
    {
      returned = core(&info, arbre);
      if (returned == 42 && lastval == 1)
	return (lastval);
      else if (returned == 42)
	return (0);
      if (returned == 2)
	return (1);
      if (returned == 123)
	return (0);
      lastval = returned;
    }
  return (0);
}
