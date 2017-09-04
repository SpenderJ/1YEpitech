/*
** print_e_reac.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_SBMLparser_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Jun 13 18:32:38 2017 Jules Spender
** Last update Wed Jun 14 13:01:31 2017 Jules Spender
*/

#include "my_h.h"

int     print_e_reac(char **f)
{
  int   i;
  int   a;
  int   d;
  char  **tab;

  i = -1;
  d = 0;
  if ((tab = malloc(sizeof(char *) * (i + 40))) == NULL)
    return (-1);
  while (f[++i] != NULL && my_strncmp(f[i], "<listOfReactants>", 17) != 0);
  while (f[++i] != NULL && my_strncmp(f[i], "</listOfReactants>", 18) != 0)
    {
      a = 0;
      while (f[i][a] != '\0' && my_strcmp(get_word(&f[i][a]), "species") != 0)
	++a;
      while (f[i][a] != '\0' && f[i][a] != '"')
	++a;
      ++a;
      if (f[i][a] != '\0' && ((tab[d] = get_word_2(&f[i][a])) != NULL))
	tab[d] = my_strcat(tab[d], get_number_eq(f[i]));
      ++d;
    }
  tab[d] = NULL;
  print_eq(tab, 0, f);
  return (print_e_prod(f));
}

int	print_e_prod(char **f)
{
  int   i;
  int   a;
  int   d;
  char  **tab;

  i = -1;
  d = 0;
  if ((tab = malloc(sizeof(char *) * (i + 40))) == NULL)
    return (-1);
  while (f[++i] != NULL && my_strncmp(f[i], "<listOfProducts>", 16) != 0);
  while (f[++i] != NULL && my_strncmp(f[i], "</listOfProducts>", 17) != 0)
    {
      a = 0;
      while (f[i][a] != '\0' && my_strcmp(get_word(&f[i][a]), "species") != 0)
	++a;
      while (f[i][a] != '\0' && f[i][a] != '"')
	++a;
      ++a;
      if (f[i][a] != '\0' && ((tab[d] = get_word_2(&f[i][a])) != NULL))
	tab[d] = my_strcat(tab[d], get_number_eq(f[i]));
      ++d;
    }
  tab[d] = NULL;
  print_eq(tab, 1, f);
  return (0);
}

void	print_eq(char **tab, int n, char **f)
{
  int	i;
  int	a;

  i = 0;
  my_sort_wordtab(tab, 0, 0);
  while (tab[i] != NULL)
    {
      a = 0;
      while (tab[i][a++] != '|');
      printf("%s ", &tab[i][a]);
      a = 0;
      while (tab[i][a] != '|')
	printf("%c", tab[i][a++]);
      if (tab[i + 1] != NULL)
	printf(" + ");
      else if (tab[i + 1] != NULL || (n == 0 && tab[i + 1] == NULL))
	printf(" ");
      i++;
    }
  if (n == 0)
    print_arrow(f);
  else
    printf("\n");
}

void	print_arrow(char **f)
{
  int	i;
  int	a;

  i = 0;
  a = 0;
  while (f[i] != NULL && my_strncmp(f[i], "<reaction", 9) != 0)
    ++i;
  while (f[i][a] != '\0' && f[i][a] != '"')
    ++a;
  ++a;
  if (f[i][a] == 'f')
    printf("-> ");
  else
    printf("<-> ");
}

char	*get_number_eq(char *str)
{
  int	i;
  int	a;
  char	*s;

  i = 0;
  while (str[i] != '"')
    ++i;
  ++i;
  a = 0;
  s = malloc(sizeof(char) * (my_strlen(str) + i));
  s[a] = '|';
  a = a + 1;
  while (str[i] != '"')
    {
      s[a] = str[i];
      ++a;
      ++i;
    }
  s[a] = '\0';
  return (s);
}
