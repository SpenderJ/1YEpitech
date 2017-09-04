/*
** option_4.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sun Jun 18 17:40:26 2017 Jules Spender
** Last update Mon Jun 19 11:47:29 2017 Jules Spender
*/

#include "my_h.h"

int	option_4(char **file, char *str)
{
  int	k;
  int	i;
  char	**tab;
  char	*s;
  int	a;

  i = 0;
  if (my_isnum(str) == -1)
    return (my_putsterr("Wrong argument\n"));
  if (((k = atoi(str)) <= 0))
    return (my_putsterr("Wrong argument\n"));
  tab = malloc(sizeof(char *) * (tab_len(file) + 1));
  s = malloc(sizeof(char) * STR_SIZE);
  fill_tab(tab, file);
  return (solve_4(tab, k));
}

int	solve_4(char **tab, int k)
{
  int	i;
  int	n;
  char	**final;

  final = malloc(sizeof(char *) * (TAB_SIZE));
  i = 0;
  n = 0;
  final[0] = NULL;
  while (tab[i] != NULL)
    {
      if (my_strlen(tab[i]) < k)
	i = i;
      else
	finish_4(tab[i], final, k);
      ++i;
    }
  final = my_sort_wordtab(final, 0, 0);
  printtab(final);
  return (0);
}

int	finish_4(char *str, char **final, int k)
{
  int	i;
  int	n;
  char	*s;

  i = 0;
  n = 0;
  while (final[n] != NULL)
    ++n;
  while (str[i] != '\0' && my_strlen(&str[i]) >= k)
    {
      s = my_partial_copy(&str[i], k);
      if (already_exist(final, s) == 0)
	final[n++] = s;
      ++i;
    }
  return (0);
}

char	*my_partial_copy(char *str, int n)
{
  int	i;
  char	*s;

  s = malloc(sizeof(char) * (n + 1));
  i = 0;
  while (str[i] != '\0' && i < n)
    {
      s[i] = str[i];
      ++i;
    }
  s[i] = '\0';
  return (s);
}

int	already_exist(char **tab, char *str)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      if (my_strcmp(tab[i], str) == 0)
	return (-1);
      ++i;
    }
  return (0);
}
