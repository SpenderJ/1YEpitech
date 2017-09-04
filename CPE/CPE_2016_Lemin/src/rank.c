/*
** rank.c for lemin in /home/hecto/CPE_2016_Lemin
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Wed Apr 26 08:58:36 2017 blaise carnevillier
** Last update Sat Apr 29 14:31:43 2017 david xu
*/

#include "my_h.h"

t_graph		*get_end(t_graph *list)
{
  t_graph	*tmp;

  tmp = list;
  while (tmp)
    {
      if (tmp->is_end == 1)
	return (tmp);
      tmp = tmp->nxt;
    }
  return (NULL);
}

t_graph		*give_rank(t_graph *g, int i)
{
  t_tnl		*tmp2;
  t_graph	*tmp;

  tmp = g;
  tmp->rank = i;
  tmp2 = tmp->tunls;
  while (tmp2)
    {
      if (tmp2->dest->rank > i)
	give_rank(tmp2->dest, i + 1);
      tmp2 = tmp2->nxt;
    }
  return (g);
}
