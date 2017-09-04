/*
** sbml_parser.c for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 12 10:47:44 2017 Jules Spender
** Last update Wed Jun 14 13:28:03 2017 Jules Spender
*/

#include "my_h.h"

int	sbml_parser(int argc, char **argv)
{
  char	**file;

  if ((file = my_opener(argv[1])) == NULL)
    return (my_putsterr("Unable to open the file\n"));
  if (file[0] == NULL && file[1] == NULL && file[2] == NULL)
    return (my_putsterr("Unable to open this file\n"));
  file = str_to_tab(file[0]);
  file = epur_my_tab(file);
  if (argc <= 2)
    {
      print_tags(file);
      free_tab(file);
      return (0);
    }
  else
    {
      if (my_strcmp(argv[2], "-i") == 0)
	return (launch_i(file, argv));
    }
  return (84);
}

char	**epur_my_tab(char **file)
{
  int	i;
  int	a;
  int	c;
  char	**newtab;

  i = -1;
  a = 0;
  while (file[++i] != NULL);
  newtab = malloc(sizeof(char *) * (i + 20));
  i = -1;
  while (file[++i] != NULL)
    {
      c = 0;
      a = 0;
      while (file[i][a] != '\0' && file[i][a] != '<')
	++a;
      newtab[i] = malloc(sizeof(char) * ((a + 100) * 10));
      while (file[i][a] != '\0' && file[i][a] != '\n')
	newtab[i][c++] = file[i][a++];
      newtab[i][c] = '\0';
    }
  newtab[i] = NULL;
  return (newtab);
}
