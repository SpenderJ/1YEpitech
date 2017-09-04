/*
** option_7.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sun Jun 18 17:41:04 2017 Jules Spender
** Last update Tue Jun 20 12:58:50 2017 Jules Spender
*/

#include "my_h.h"

int	option_7(char **file)
{
  char	**tab;
  int	i;
  int	j;
  char	**tab2;

  i = 0;
  tab2 = malloc(sizeof(char *) * (TAB_SIZE * TAB_SIZE));
  fill_tab(tab2, file);
  tab = malloc(sizeof(char *) * (STR_SIZE * STR_SIZE));
  while (i < my_strlen(file[1]))
    tab[i++] = malloc(sizeof(char) * (STR_SIZE * STR_SIZE));
  tab[i] = NULL;
  resolve_7(tab2, tab);
  return (0);
}

int	resolve_7(char **file, char **tab)
{
  if (my_strlen(file[0]) > my_strlen(file[1]))
    return (print_7(file[0], file[1]));
  else if (my_strlen(file[0]) < my_strlen(file[1]))
    return (print_7(file[1], file[0]));
  else
    printf("%s\n%s\n", file[0], file[1]);
  return (0);
}

int	print_7(char *bigger, char *smaller)
{
  int	i;
  int	a;
  int	c;

  i = my_strlen(bigger) - my_strlen(smaller);
  a = 0;
  c = 0;
  while (bigger[a] != '\0')
    {
      if (bigger[a + 1] == smaller[a] && i > 0)
	{
	  printf("-%c", smaller[a]);
	  i = i - 1;
	  a = a + 1;
	}
      else
	{
	  printf("%c", smaller[a]);
	  a = a + 1;
	}
    }
  while (i-- > 0)
    printf("-");
  printf("\n%s\n", bigger);
  return (0);
}
