/*
** core.c for emacs in /home/jules/PSU/PSU_2016_minishell2
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Mar 21 10:44:11 2017 Jules Spender
** Last update Wed May 17 14:25:14 2017 Jules Spender
*/

#include "my_h.h"

int	core(t_info *info, t_node *arbre)
{
  int	i;
  char	*arg;
  char	**array;
  char	*cwd;

  i = 0;
  cwd = getcwd(NULL, 0);
  my_putstr(cwd);
  my_putstr("> ");
  if ((arg = get_next_line(0)) == NULL)
    return (42);
  if ((array = my_str_to_wordtab(arg, ' ', 0)) == NULL)
    return (i);
  my_printtab(array);
  printf("\n\n\n");
  ll_array_create(array);  
  i = 0;
  my_printtab(array);
  printf("\n\n\n");
  array = tab_to_tab(array, -1, 0);
  my_printtab(array);
  printf("\n\n\n");
  array = epur(array);
  my_printtab(array);
  printf("\n\n\n");
  return (my_chooser(array, 0, info));
}
