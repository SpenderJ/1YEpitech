/*
** compartements.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_SBMLparser_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Jun 13 10:32:46 2017 Jules Spender
** Last update Wed Jun 14 10:13:53 2017 Jules Spender
*/

#include "my_h.h"

int	check_compartements(char **f, char *str)
{
  int	i;
  int	a;
  int	c;
  char	*word;

  i = -1;
  while (f[++i] != NULL && my_strncmp(f[i], "<listOfCompartments>", 20) != 0);
  ++i;
  while (f[i] != NULL && my_strcmp(f[i], "</listOfCompartments>") != 0)
    {
      c = 0;
      a = 0;
      while (f[i][a] != '\0' && c < 3)
	if (f[i][a++] == '"')
	  ++c;
      if (f[i][a] != '\0')
	{
	  word = get_word_2(&f[i][a]);
	  if (my_strcmp(word, str) == 0)
	    return (0);
	}
      ++i;
    }
  return (1);
}

int	print_compartements(char **file, char *str)
{
  int	i;
  int	c;
  int	a;
  int	d;
  char	**tab;

  i = -1;
  d = 0;
  while (file[++i] != NULL && my_strncmp(file[i], "<listOfSpecies>", 15) != 0);
  ++i;
  if ((tab = malloc(sizeof(char *) * (i + 20))) == NULL)
    return (-1);
  while (file[i] != NULL && my_strcmp(file[i], "</listOfSpecies>") != 0)
    {
      c = 0;
      a = 0;
      while (file[i][a] != '\0' && c < 3)
	if (file[i][a++] == '"')
	  ++c;
      if (file[i][a] != '\0')
	tab[d++] = get_word_2(&file[i][a]);
      ++i;
    }
  tab[d] = NULL;
  return (print_screen_c(tab, str));
}

char	*get_word_2(char *str)
{
  int	i;
  char	*s;

  i = my_strlen(str);
  if ((s = malloc(sizeof(char) * (i + 2))) == NULL)
    return (NULL);
  i = 0;
  while (str[i] != '\0' && str[i] != '"')
    {
      s[i] = str[i];
      ++i;
    }
  s[i] = '\0';
  return (s);
}

int	print_screen_c(char **tab, char *str)
{
  int	i;

  i = 0;
  tab = my_sort_wordtab(tab, 0, 0);
  printf("List of species in compartment %s\n", str);
  while (tab[i] != NULL)
    printf("----->%s\n", tab[i++]);
  return (0);
}
