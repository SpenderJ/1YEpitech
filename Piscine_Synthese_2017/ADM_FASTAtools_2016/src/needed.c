/*
** needed.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 19 10:38:00 2017 Jules Spender
** Last update Tue Jun 20 09:46:30 2017 Jules Spender
*/

#include "my_h.h"

int	tab_len(char **tab)
{
  int   i;

  i = 0;
  while (tab[i] != NULL)
    ++i;
  return (i);
}

int	my_isnum(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= '9' && str[i] >= '0')
	i = i + 1;
      else
	return (-1);
    }
  return (0);
}

char	**epur_tab(char **tab)
{
  char	**final;
  int	i;
  int	a;

  i = 0;
  a = 0;
  final = malloc(sizeof(char *) * (TAB_SIZE));
  while (tab[i] != NULL)
    {
      if (tab[i][0] == '\n' || tab[i][0] == '\0')
	++i;
      else
	{
	  final[a] = malloc(sizeof(char) * (STR_SIZE));
	  final[a] = tab[i];
	  ++a;
	  ++i;
	}
    }
  if (i == 0)
    return (NULL);
  final[a] = NULL;
  return (final);
}

char	**add_reverse(char **tab)
{
  int	i;
  int	a;
  int	c;

  i = 0;
  a = 0;
  c = 0;
  while (tab[i] != NULL)
    ++i;
  while (a < i)
    {
      tab[i + c] = get_reverse_adn(tab[c]);
      c = c + 1;
      a = a + 1;
    }
  tab[i + c] = NULL;
  return (tab);
}

char	*get_reverse_adn(char *str)
{
  int   i;
  int   a;
  char  *s;

  i = 0;
  a = 0;
  s = malloc(sizeof(char) * (STR_SIZE));
  s = my_revstr(str);
  while (s[i] != '\0')
    {
      if (s[i] == 'a' || s[i] == 'A')
	s[i] = 'T';
      else if (s[i] == 't' || s[i] == 'T')
	s[i] = 'A';
      else if (s[i] == 'c' || s[i] == 'C')
	s[i] = 'G';
      else if (s[i] == 'g' || s[i] == 'G')
	s[i] = 'C';
      else if (s[i] == 'n' || s[i] == 'N')
	s[i] = 'N';
      ++i;
    }
  return (s);
}
