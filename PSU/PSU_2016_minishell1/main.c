/*
** main.c for emacs in /home/jules/PSU/PSU_2016_minishell1
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Jan 19 09:21:24 2017 Jules Spender
** Last update Tue Mar 21 11:08:18 2017 Jules Spender
*/

#include "my_h.h"

int	main(int argc, char **argv, char **env)
{
  t_first	my_controler;
  size_t	env_size;
  char		*line;
  size_t	*len;

  len = 0;
  while (42)
    {
      signal(SIGINT, SIG_IGN);
      my_controler.array = my_env_finder(env);
      core(my_controler, env);
    }
  return (0);
}
