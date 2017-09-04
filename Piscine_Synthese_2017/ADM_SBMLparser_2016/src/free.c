/*
** free.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_SBMLparser_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Wed Jun 14 10:09:50 2017 Jules Spender
** Last update Wed Jun 14 10:10:52 2017 Jules Spender
*/

#include "my_h.h"

void	free_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      free(tab[i]);
      ++i;
    }
  free(tab);
}
