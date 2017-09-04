/*
** main.c for emacs in /home/david.xu/Projet/CPE/CPE_2016_Lemin/src
** 
** Made by david xu
** Login   <david.xu@epitech.net>
** 
** Started on  Tue Apr 11 13:43:14 2017 david xu
** Last update Sun Apr 30 11:08:23 2017 blaise carnevillier
*/

#include <stdlib.h>
#include "my_h.h"

int	start_end(t_graph *for_graph)
{
  int		end;
  int		start;
  t_graph	*tmp;
  t_tnl		*tnl;

  tmp = for_graph;
  end = 0;
  start = 0;
  while (tmp)
    {
      tnl = tmp->tunls;
      if (tmp->is_start == 1 && tmp->tunls != NULL)
	if (my_strcmp(tmp->index, tnl->dest->index) == 1)
	  start = 1;
      if (tmp->is_end == 1 && tmp->tunls != NULL)
	if (my_strcmp(tmp->index, tnl->dest->index) == 1)
	  end = 1;
      tmp = tmp->nxt;
    }
  return (end && start);
}

int	main()
{
  t_ant		*for_ants;
  t_graph	*for_graph;
  t_graph	*new_graph;

  for_ants = NULL;
  for_graph = NULL;
  new_graph = NULL;
  if ((for_ants = parsing_ant(for_ants)) == NULL)
    return (84);
  if ((for_graph = parsing_graph(for_graph, 0)) == NULL)
    return (84);
  if (!(start_end(for_graph)))
    return (84);
  if ((for_ants = add_start(for_ants, for_graph)) == NULL)
    return (84);
  new_graph = get_end(for_graph);
  if ((new_graph = give_rank(new_graph, 0)) == NULL)
    return (84);
  lets_play(for_ants);
  free_ant(for_ants);
  free_graph(for_graph);
  return (0);
}