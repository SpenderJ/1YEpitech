/*
** species.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_SBMLparser_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Jun 13 10:35:38 2017 Jules Spender
** Last update Wed Jun 14 09:49:54 2017 Jules Spender
*/

#include "my_h.h"

int	print_species(char **file)
{
  int	i;
  int   a;
  int   d;
  char  **tab;

  i = -1;
  d = 0;
  while (file[++i] != NULL && my_strncmp(file[i], "<listOfSpecies>", 15) != 0);
  ++i;
  if ((tab = malloc(sizeof(char *) * (i + 20))) == NULL)
    return (-1);
  while (file[i] != NULL && my_strcmp(file[i], "</listOfSpecies>") != 0)
    {
      a = 0;
      while (file[i][a] != '\0' &&\
	     my_strcmp((get_word(&file[i][a])), "name") != 0)
	++a;
      while (file[i][a] != '\0' && file[i][a] != '"')
	  ++a;
      if (file[i][++a] != '\0')
	tab[d++] = get_word_2(&file[i][a]);
      ++i;
    }
  tab[d] = NULL;
  return (print_species2(tab));
}

int	print_species2(char **tab)
{
  int	i;

  i = 0;
  my_sort_wordtab(tab, 0, 0);
  printf("List of species\n");
  while (tab[i] != NULL)
    printf("----->%s\n", tab[i++]);
  return (0);
}
