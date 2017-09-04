/*
** print_ref.c for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 12 16:57:34 2017 Jules Spender
** Last update Tue Jun 13 19:55:01 2017 Jules Spender
*/

#include "my_h.h"

void	print_ref(char **ref, char **file)
{
  int	i;
  char	**cate;
  int	c;
  int	a;

  i = 0;
  a = 0;
  while (ref[a] != NULL)
    {
      printf("%s\n", ref[a]);
      while (my_strcmp(get_word(&file[i++][1]), ref[a]) != 0);
      i = i - 1;
      if ((cate = malloc(sizeof(char*) * ((c_equals(file[i])) + 2))) == NULL)
	return;
      c = c_equals(file[i]);
      fill_categories(file[i], cate, c);
      a = a + 1;
      i = -1;
      while (cate[++i] != NULL)
	printf("----->%s\n", cate[i]);
      i = 0;
    }
}

int	fill_categories(char *str, char **categories, int c)
{
  int	i;
  int	a;

  i = 1;
  a = 0;
  while (str[++i] != ' ');
  ++i;
  while (c > 0)
    {
      categories[a++] = get_word(&str[i]);
      c = c - 1;
      while (str[++i] != '\"');
      ++i;
      while (str[++i] != '\"');
      ++i;
      while (str[++i] == ' ');
    }
  categories[a] = NULL;
  my_sort_wordtab(categories, 0, 0);
  return (0);
}

int	c_equals(char *str)
{
  int	i;
  int	c;

  i = 0;
  c = 0;
  while (str[i] != '\0')
    {
      if (str[i++] == '=')
	c = c + 1;
    }
  return (c);
}
