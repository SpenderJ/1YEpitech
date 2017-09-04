/*
** my_opener.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sun Jun 18 17:15:51 2017 Jules Spender
** Last update Sun Jun 18 17:33:04 2017 Jules Spender
*/

#include "my_h.h"

char	**my_opener()
{
  int	i;
  int	fd;
  char	**tab;
  char	*s;

  fd = 0;
  i = 0;
  tab = malloc(sizeof(char *) * TAB_SIZE);
  while ((s = get_next_line(fd)) != NULL)
    {
      tab[i] = malloc(sizeof(char) * (strlen(s)));
      tab[i] = s;
      ++i;
    }
  tab[i] = NULL;
  return (tab);
}
