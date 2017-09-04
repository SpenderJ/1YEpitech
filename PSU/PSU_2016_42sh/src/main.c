/*
** main.c for emacs in /home/jules/PSU/PSU_2016_minishell2
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Mar 21 10:32:28 2017 Jules Spender
** Last update Sat May 20 10:45:22 2017 david xu
*/

#include "my_h.h"

void	ctrl_c()
{
  char	*cwd;

  cwd = getcwd(NULL, 0);
  write(1, "\n", 1);
  my_putstr(cwd);
  my_putstr("> ");
}

int	main(int argc, char **argv, char **env)
{
  t_info	info;
  int		returned;
  t_node	*arbre;
  int		lastval;

  signal(SIGINT, ctrl_c);
  arbre = NULL;
  lastval = -30071998;
  if (env != NULL)
    info.my_env = my_env_finder(env);
  while (42)
    {
      returned = core(&info, arbre);
      if (returned == 42 && lastval == 1 && my_exit(NULL))
	return (1);
      else if (returned == 42 && my_exit(NULL))
	return (SUCCESS);
      else if (returned == 2)
	return (1);
      else if (returned == 123)
	return (SUCCESS);
      lastval = returned;
    }
  return (SUCCESS);
}
