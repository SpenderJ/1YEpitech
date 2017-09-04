/*
** reac.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_SBMLparser_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Jun 13 10:34:50 2017 Jules Spender
** Last update Wed Jun 14 09:20:11 2017 Jules Spender
*/

#include "my_h.h"

int	check_reac(char **f, char *str)
{
  int   i;
  int   a;
  char  *word;

  i = -1;
  while (f[++i] != NULL && my_strncmp(f[i], "<listOfReactions>", 17) != 0);
  ++i;
  while (f[i] != NULL && my_strcmp(f[i], "<listOfReactants>") != 0)
    {
      a = 0;
      while (f[i][a] != '\0' && (my_strcmp(get_word(&f[i][a]), "id") != 0))
	++a;
      while (f[i][a] != '\0' && f[i][a] != '"')
	++a;
      if (f[i][++a] != '\0')
	{
	  word = get_word_2(&f[i][a]);
	  if (my_strcmp(word, str) == 0)
	    return (0);
	}
      ++i;
    }
  return (1);
}

int	print_reac(char **f, char *str)
{
  int	i;
  int	a;
  int	d;
  char	**tab;

  i = -1;
  d = 0;
  if ((tab = malloc(sizeof(char *) * (i + 20))) == NULL)
    return (-1);
  printf("List of reactants of reaction %s\n", str);
  while (f[++i] != NULL && my_strncmp(f[i], "<listOfReactants>", 17) != 0);
  while (f[++i] != NULL && my_strncmp(f[i], "</listOfReactants>", 18) != 0)
    {
      a = 0;
      while (f[i][a] != '\0' &&\
	     (my_strcmp(get_word(&f[i][a]), "species") != 0))
	++a;
      while (f[i][a] != '\0' && f[i][a] != '"')
	++a;
      if (f[i][a] != '\0')
	tab[d++] = get_word(&f[i][++a]);
    }
  tab[d] = NULL;
  tab = my_sort_wordtab(tab, 0, 0);
  return (print_reac2(f, str, tab));
}

int	print_reac2(char **f, char *str, char **tab)
{
  int   i;
  int   a;
  int	d;

  i = 0;
  while (tab[i] != NULL)
    printf("----->%s\n", tab[i++]);
  i = -1;
  d = 0;
  while (f[++i] != NULL && my_strncmp(f[i], "<listOfProducts>", 16) != 0);
  while (f[++i] != NULL && my_strncmp(f[i], "</listOfProducts>", 17) != 0)
    {
      a = 0;
      while (f[i][a] != '\0' &&\
	     (my_strcmp(get_word(&f[i][a]), "species") != 0))
	++a;
      while (f[i][a] != '\0' && f[i][a] != '"')
	++a;
      if (f[i][a] != '\0')
	tab[d++] = get_word(&f[i][++a]);
    }
  tab[d] = NULL;
  printf("List of products of reaction %s\n", str);
  tab = my_sort_wordtab(tab, 0, 0);
  return (print_reac3(tab));
}

int	print_reac3(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    printf("----->%s\n", tab[i++]);
  return (0);
}
