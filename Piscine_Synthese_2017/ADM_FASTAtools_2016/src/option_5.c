/*
** option_5.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sun Jun 18 17:40:39 2017 Jules Spender
** Last update Tue Jun 20 10:35:34 2017 Jules Spender
*/

#include "my_h.h"

int	option_5(char **file)
{
  char	**tab;

  tab = malloc(sizeof(char *) * (TAB_SIZE));
  if ((fill_tab(tab, file)) == 84)
    return (0);
  if (tab == NULL || tab[0] == NULL)
    return (0);
  tab = add_reverse(tab);
  tab = epur_tab(tab);
  return (solve_5(tab));
}

int	solve_5(char **file)
{
  int	i;
  int	n;
  char	**tab;

  tab = malloc(sizeof(char *) * (TAB_SIZE));
  n = 0;
  if ((i = 0) == 0 && file[0] == NULL)
    return (0);
  tab[0] = NULL;
  while (file[i] != NULL)
    {
      get_sequence(file[i], tab, 0, 0);
      ++i;
    }
  tab = epur_tab(tab);
  tab = my_sort_wordtab(tab, 0, 0);
  return (printtab(tab));
}

int	get_sequence(char *str, char **tab, int i, int n)
{
  int	a;

  while (tab[n] != NULL)
    ++n;
  tab[n] = malloc(sizeof(char) * (STR_SIZE));
  while (str[i] != '\0')
    {
      while (str[i] != '\0' && my_strncmp(&str[i], "ATG", 3) != 0)
	++i;
      if (str[i] == '\0')
	return (0);
      a = i;
      while (str[i] != '\0' && check_end(&str[i]) != 0)
	i = i + 3;
      if (str[i] != '\0' && i < my_strlen(str))
	{
	  tab[n++] = get_sequence2(&str[a], a, 0);
	  i = a + 1;
	}
      else
	i = a + 1;
    }
  tab[n] = NULL;
  return (0);
}

int	check_end(char *str)
{
  if (my_strncmp(str, "TAA", 3) == 0)
    return (0);
  if (my_strncmp(str, "TAG", 3) == 0)
    return (0);
  if (my_strncmp(str, "TGA", 3) == 0)
    return (0);
  return (-1);
}

char	*get_sequence2(char *str, int i, int c)
{
  char	*str2;
  int	a;

  a = -1;
  str2 = malloc(sizeof(char) * (STR_SIZE));
  while (str[c] != '\0' && check_end(&str[c]) != 0)
    {
      str2[++a] = str[c];
      str2[++a] = str[c + 1];
      str2[++a] = str[c + 2];
      c = c + 3;
    }
  str2[++a] = '\0';
  return (str2);
}
