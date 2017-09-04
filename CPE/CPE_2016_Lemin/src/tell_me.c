/*
** tell_me.c for emacs in /home/david.xu/Projet/CPE/CPE_2016_Lemin/src
** 
** Made by david xu
** Login   <david.xu@epitech.net>
** 
** Started on  Sat Apr 15 11:25:14 2017 david xu
** Last update Sat Apr 29 21:05:36 2017 blaise carnevillier
*/

#include <stdlib.h>
#include "my_h.h"

void	tell_me(t_ant *caca)
{
  t_ant	*tmp;

  tmp = caca;
  while (tmp != NULL)
    {
      my_printf("emplacement = %s\n", tmp->node->index);
      tmp = tmp->nxt;
    }
}

void	tell_list(t_graph *list)
{
  t_graph	*tmp;
  t_tnl		*tmp2;

  tmp = list;
  while (tmp)
    {
      my_printf("index = %s  rank = %d\n", tmp->index, tmp->rank);
      tmp2 = tmp->tunls;
      while (tmp2)
	{
	  my_printf("\t\t%s", tmp2->dest->index);
	  tmp2 = tmp2->nxt;
	}
      tmp = tmp->nxt;
    }
}
