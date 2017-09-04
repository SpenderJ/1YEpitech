/*
** fill_tab.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 19 10:45:55 2017 Jules Spender
** Last update Tue Jun 20 02:49:09 2017 Jules Spender
*/

#include "my_h.h"

char	*fill_tab3(char *fill, char *str)
{
  int   i;
  int   a;
  char  *s;

  i = 0;
  a = 0;
  s = malloc(sizeof(char) * (STR_SIZE));
  while (str[i] != '\0')
    {
      while (str[i] != '\0')
	{
	  if (str[i] == 'a' || str[i] == 'c' || str[i] == 't'\
	      || str[i] == 'g' || str[i] == 'n')
	    s[a++] = str[i] - 32;
	  else if (str[i] == 'A' || str[i] == 'C' || str[i] == 'T'\
		   || str[i] == 'G' || str[i] == 'N')
	    s[a++] = str[i];
	  ++i;
	}
      s[a] ='\0';
    }
  fill = strcat(fill, s);
  return (fill);
}

char	*fill_tab2(char *fill, char *str)
{
  int   i;
  int   a;

  i = 0;
  a = 0;
  if (fill == NULL)
    {
      fill = malloc(sizeof(char) * (STR_SIZE));
      fill[0] = '\0';
      while (str[i] != '\0')
	{
	  if (str[i] == 'a' || str[i] == 'c' || str[i] == 't'\
	      || str[i] == 'g' || str[i] == 'n')
	    fill[a++] = str[i] - 32;
	  else if (str[i] == 'A' || str[i] == 'C' || str[i] == 'T'\
		   || str[i] == 'G' || str[i] == 'N')
	    fill[a++] = str[i];
	  ++i;
	}
      fill[a] = '\0';
      return (fill);
    }
  else
    return (fill_tab3(fill, str));
}

int	fill_tab(char **tab, char **file)
{
  int   i;
  int   a;
  int   n;
  int   c;

  i = 0;
  a = 0;
  tab[a] = malloc(sizeof(char) * (STR_SIZE));
  tab[0] = '\0';
  while (file[i] != NULL)
    {
      n = -1;
      c = 0;
      if (file[i][0] == '>' && i == 0)
	i = i;
      else if (file[i][0] == '>')
	++a;
      else
	tab[a] = fill_tab2(tab[a], file[i]);
      ++i;
    }
  if (i == 0)
    return (84);
  tab[++a] = NULL;
  return (0);
}
