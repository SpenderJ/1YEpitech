/*
** core.c for emacs in /home/jules/PSU/PSU_2016_minishell1
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Sun Jan 22 19:13:15 2017 Jules Spender
** Last update Fri Jan 27 08:14:00 2017 Jules Spender
*/

#include "my_h.h"
#include "gnl.h"

int	core(t_first my_controler, char **env)
{
  int		a;
  char		*line;

  a = 0;
  my_putstr("$> ");
  signal(SIGINT,SIG_IGN);
  line = get_next_line(0);
  my_controler.arg = my_str_to_wordtab(line, ';');
  cd(my_controler);
  my_exit(my_controler);
  write(1, "COUCOU", 6);
  return (0);
}
