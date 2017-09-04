/*
** option_3.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sun Jun 18 17:40:14 2017 Jules Spender
** Last update Mon Jun 19 18:08:05 2017 Jules Spender
*/

#include "my_h.h"

int	option_3(char **file)
{
  int   i;
  int   a;
  char	*s;

  i = 0;
  s = malloc(sizeof(char) * (STR_SIZE));
  s[0] = '\0';
  while (file[i] != NULL)
    {
      a = 0;
      if (file[i][a] == '>' && i == 0)
	printf("%s\n", file[i]);
      else if (file[i][a] == '>')
	{
	  print_reverse_adn(s);
	  printf("\n%s\n", file[i]);
	  s[0] = '\0';
	}
      else
	s = strcat(s, file[i]);
      ++i;
    }
  print_reverse_adn(s);
  printf("\n");
  return (0);
}

void	print_reverse_adn(char *str)
{
  int   i;

  i = strlen(str) - 1;
  while (i >= 0)
    {
      if (str[i] == 'a' || str[i] == 'A')
	printf("T");
      else if (str[i] == 't' || str[i] == 'T')
	printf("A");
      else if (str[i] == 'c' || str[i] == 'C')
	printf("G");
      else if (str[i] == 'g' || str[i] == 'G')
	printf("C");
      else if (str[i] == 'n' || str[i] == 'N')
	printf("N");
      --i;
    }
}
