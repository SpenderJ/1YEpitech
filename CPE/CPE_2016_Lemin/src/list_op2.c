/*
** list_op2.c for Lemin in /home/david.xu/Projet/CPE/CPE_2016_Lemin
** 
** Made by david xu
** Login   <david.xu@epitech.net>
** 
** Started on  Mon Apr 17 16:50:29 2017 david xu
** Last update Sun Apr 30 00:00:12 2017 blaise carnevillier
*/

#include "my_h.h"

void	print_tnl(char *str)
{
  int	i;

  i = 0;
  if (!str)
    i = 0;
  else
    {
      while (str[i] != 0 && str[i] != '#')
	{
	  write(1, &str[i], 1);
	  ++i;
	}
      if (i != 0)
	write(1, "\n", 1);
    }
}

t_tnl	*add_tnl(t_tnl	*list, t_graph *room)
{
  t_tnl	*tunel;

  if (!(tunel = malloc(sizeof(t_tnl))))
    return (NULL);
  tunel->dest = room;
  tunel->nxt = list;
  return (tunel);
}

t_ant		*add_start(t_ant *list, t_graph *room)
{
  t_graph	*tmp2;
  t_ant		*tmp;
  int		i;

  tmp = list;
  tmp2 = room;
  i = 0;
  while (tmp2 && i != 1)
    {
      if (tmp2->is_start == 1)
	i = 1;
      if (i != 1)
	tmp2 = tmp2->nxt;
    }
  if (i != 1)
    return (NULL);
  while (tmp)
    {
      tmp->node = tmp2;
      tmp = tmp->nxt;
    }
  return (list);
}
