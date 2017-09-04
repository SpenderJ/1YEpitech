/*
** product.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_SBMLparser_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Jun 13 10:33:58 2017 Jules Spender
** Last update Wed Jun 14 11:03:13 2017 Jules Spender
*/

#include "my_h.h"

int	check_product(char **f, char *str)
{
  int	i;
  int	a;
  char	*word;

  i = -1;
  while (f[++i] != NULL && my_strncmp(f[i], "<listOfReactants>", 17) != 0);
  ++i;
  while (f[i] != NULL && my_strcmp(f[i], "</listOfReactants>") != 0)
    {
      a = 0;
      while (f[i][a] != '\0' &&\
	     my_strcmp(get_word_2(&f[i][a]), "species=") != 0)
	++a;
      while (f[i][a] != '=')
	++a;
      a = a + 2;
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

int	print_product(char **f, char *str)
{
  int	i;
  int	a;

  i = -1;
  while (f[++i] != NULL && my_strncmp(f[i], "<listOfReactions>", 17) != 0);
  ++i;
  a = 0;
  while (f[i][a] != '\0' && (my_strcmp(get_word(&f[i][a]), "id") != 0))
    ++a;
  while (f[i][a] != '"')
    ++a;
  a = a + 1;
  printf("List of reactions consuming species %s (quantities)\n", str);
  printf("----->%s (1)\n", get_word_2(&f[i][a]));
  return (0);
}
