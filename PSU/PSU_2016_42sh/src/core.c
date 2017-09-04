/*
** core.c for emacs in /home/jules/PSU/PSU_2016_minishell2
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Mar 21 10:44:11 2017 Jules Spender
** Last update Sun May 21 17:11:04 2017 blaise carnevillier
*/

#include "my_h.h"

int	core(t_info *info, t_node *arbre)
{
  int	i;
  char	*arg;
  char	**array_s;
  char	**array_p;
  char	*cwd;

  i = 0;
  cwd = getcwd(NULL, 0);
  if (isatty(0) == 1)
    {
      my_putstr(cwd);
      my_putstr(">");
    }
  if ((arg = get_next_line(0)) == NULL)
    return (42);
  if ((array_s  = my_str_to_wordtab(arg, ' ', 0)) == NULL)
    return (i);
  if (array_s == NULL)
    return (FAILURE);
  ll_array_create(array_s);
  i = 0;
  array_s = tab_to_tab(array_s, -1, 0);
  array_s = epur(array_s);
  return (my_chooser(array_s, 0, info));
}
