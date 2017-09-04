/*
** option_1.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sun Jun 18 17:39:32 2017 Jules Spender
** Last update Mon Jun 19 17:25:35 2017 Jules Spender
*/

#include "my_h.h"

int	option_1(char **file)
{
  int	i;
  int	a;

  i = 0;
  while (file[i] != NULL)
    {
      a = 0;
      if (file[i][a] == '>' && i == 0)
	printf("%s\n", file[i]);
      else if (file[i][a] == '>')
	printf("\n%s\n", file[i]);
      else
	print_adn(file[i]);
      ++i;
    }
  printf("\n");
  return (0);
}

void	print_adn(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == 'a' || str[i] == 'c' || str[i] == 't'\
	  || str[i] == 'g' || str[i] == 'n')
	printf("%c", str[i] - 32);
      else if (str[i] == 'A' || str[i] == 'C' || str[i] == 'T'\
	       || str[i] == 'G' || str[i] == 'N')
	printf("%c", str[i]);
      ++i;
    }
}
