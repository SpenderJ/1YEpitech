/*
** print_tags.c for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 12 15:45:21 2017 Jules Spender
** Last update Tue Jun 13 23:37:39 2017 Jules Spender
*/

#include "my_h.h"

void	print_tags(char **file)
{
  char	**tagnames;

  tagnames = get_tags(file);
  tagnames = my_sort_wordtab(tagnames, 0, 0);
  print_ref(tagnames, file);
}

char	**get_tags(char **file)
{
  int	i;
  int	a;
  int	c;
  char	**tags;

  a = 0;
  i = 0;
  if ((tags = malloc(sizeof(char*) * (i + 20))) == NULL)
    return (NULL);
  tags[0] = NULL;
  while (file[i] != NULL)
    {
      if (i != 0 && (search_tags(file[i]) == 0) &&\
	  (epur(get_word(&file[i][1]), tags) == 0))
	{
	  c = 1;
	  tags = tab_realloc(tags);
	  tags[a++] = get_word(&file[i][c]);
	  tags[a] = NULL;
	}
      ++i;
    }
  tags[a] = NULL;
  return (tags);
}

int	epur(char *str, char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      if (my_strcmp(tab[i], str) == 0)
	return (-1);
      i = i + 1;
    }
  return (0);
}

int	search_tags(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && str[i] != '\n')
    {
      if (str[i] == '=')
	return (0);
      ++i;
    }
  return (-1);
}

char	*get_word(char *str)
{
  int	i;
  char	*s;

  i = 0;
  if ((s = malloc(sizeof(char) * ((i + 100) + my_strlen(str)))) == NULL)
    return (NULL);
  s[0] = '\0';
  while (str[i] != '\0' && str[i] != ' ' && str[i] != '=' && str[i] != '"')
    {
      s[i] = str[i];
      ++i;
    }
  s[i] = '\0';
  return (s);
}
