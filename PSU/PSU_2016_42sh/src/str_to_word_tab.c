/*
** str_to_word_tab.c for  in /home/robin/CPE_2016_stumper3
** 
** Made by Robin Pronnier
** Login   <robin@epitech.net>
** 
** Started on  Thu May  4 15:38:15 2017 Robin Pronnier
** Last update Sat May 20 11:09:19 2017 david xu
*/

#include <stdlib.h>
#include "my_h.h"

int	free_tab(char **tab)
{
  int	i;

  i = -1;
  while (tab[++i])
    free(tab[i]);
  return (SUCCESS);
}

char	**my_str_to_word_tab(char *s, char c)
{
  int	i;
  int	j;
  int	k;
  char	**tab;

  tab = NULL;
  i = 0;
  k = 0;
  if ((tab = malloc(sizeof(char *) * (strlen(s) + 1))) == NULL)
    return (NULL);
  while (s[i] != '\0')
    {
      if ((tab[k] = malloc(sizeof(char) * (strlen(s) + 1))) == NULL)
	return (NULL);
      j = 0;
      while (s[i] != '\0' && s[i] != c)
	tab[k][j++] = s[i++];
      tab[k][j] = '\0';
      ++k;
      if (s[i] != '\0')
	++i;
    }
  tab[k] = NULL;
  return (tab);
}

char    **my_str_to_word_tab2(char *s, char *cmp)
{
  int   i;
  int   j;
  int   k;
  char  **tab;

  tab = NULL;
  i = 0;
  k = 0;
  if ((tab = malloc(sizeof(char *) * (strlen(s) + 1))) == NULL)
    return (NULL);
  while (s[i] != '\0')
    {
      if ((tab[k] = malloc(sizeof(char) * (strlen(s) + 1))) == NULL)
	return (NULL);
      j = -1;
      while (s[i] != '\0' && (s[i] != cmp[0] || s[i + 1] != cmp[1]))
	tab[k][j++] = s[i++];
      tab[k][j] = '\0';
      ++k;
      if (s[i] != '\0')
	++i;
    }
  tab[k] = NULL;
  return (tab);
}

char    **tab_to_tab(char **tab, int i, int a)
{
  char  **array;

  while (tab[++i] != NULL);
  array = malloc(sizeof(char*) * ((i + 2) * (i + 2)));
  i = 0;
  while (tab[i] != NULL)
    {
      if (tab[i][0] == ';' || tab[i][0] == '|' || tab[i][0] == '&'
	  || tab[i][0] == '>' || tab[i][0] == '<')
	{
	  a = a + 1;
	  array[a] = malloc(sizeof(char) * (i + 10) * (i + 10));
	  array[a] = tab[i++];
	  while (tab[i] != NULL && array[a][0] == tab[i++][0]);
	  if (tab[i - 1] != NULL)
	    i = i - 1;
	  a = a + 1;
	}
      else
	{
	  array[a] = my_strcat(" ", array[a]);
	  array[a] = my_strcat(tab[i++], array[a]);
	}
    }
  return (array);
}
