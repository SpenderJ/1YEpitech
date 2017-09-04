/*
** main.c for emacs in /home/jules/PSU/PSU_2016_tetris/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Mar  7 10:33:12 2017 Jules Spender
** Last update Tue Mar 21 10:39:40 2017 Jules Spender
*/

#include "my_h.h"

int	main(int argc, char **argv)
{
  int	returned_value;
  t_info	*info;
  char	***tetriminos;

  if ((info = malloc(sizeof(t_info))) == NULL)
    return (84);
  returned_value = 0;
  declarestruct(info);
  if (argc >= 2)
    returned_value = tetris_option_choose(argc, argv, info, 0);
  else if (argc == 1)
    {
      printf("TO DEBUG\n");
      return (0);
    }
  if (returned_value == 84)
    {
      write(2, "Usage : ./tetris [options]\n", 28);
      return (84);
    }
  return (returned_value);
}

char	***declarechar(char *name)
{
  int	i;
  DIR	*dir;
  struct dirent	*dirent;
  char	**filename;

  if ((filename = malloc(sizeof(char*) * 100)) == NULL)
    return (NULL);
  i = 0;
  if ((dir = opendir(name)) == NULL)
    return (NULL);
  while ((dirent = readdir(dir)))
    {
      if (dirent->d_name[0] != '.' )
	{
	  filename[i] = my_strdup(dirent->d_name);
	  i = i + 1;
	}
    }
  filename[i] = NULL;
  filename = my_sort_wordtab(filename, 0, 0);
  i = 0;
  while (filename[++i] != NULL);
  my_printf("Tetriminos :  %d\n", i);
  return (triplearray(filename, i, 0, 0));
}

char	***triplearray(char **filename, int i, int fd, int a)
{
  DIR	*file;
  char	***tetriminos;
  char	*pasteque;

  if ((tetriminos = malloc(sizeof(char**) * ((i + 1) * (i + 1)))) == NULL)
    return (NULL);
  i = 0;
  if ((file = opendir("tetriminos")) == NULL)
    return (NULL);
  while (filename[a] != NULL)
    {
      i = 0;
      pasteque = my_strdup("./tetriminos/\0");
      pasteque = my_strcat(pasteque, filename[a]);
      if ((fd = open(pasteque, O_RDONLY)) == -1)
	return (NULL);
      filename[a] = modif_name(filename[a]);
      my_printf("Tetriminos : Name  %s :", filename[a]);
      tetriminos = triplearray2(fd, i, a, tetriminos);
      while (tetriminos[a][i] != NULL)
	my_printf("%s\n", tetriminos[a][i++]);
      a = a + 1;
    }
  chdir("..");
  return (tetriminos);
}

char	***triplearray2(int fd, int i, int a, char ***tetriminos)
{
  char	*s;
  int	large;
  int	c;

  if ((s = malloc(sizeof(char) * 100)) == NULL)
    return (NULL);
  s = get_next_line(fd);
  tetriminos[a + 1] = NULL;
  if (verif_string(s, 0) != 0)
    {
      if ((tetriminos[a] = malloc(sizeof(char*) * 10)) == NULL)
	return (NULL);
      tetriminos[a][0] = my_strdup(" Error\0");
      return (tetriminos);
    }
  large = my_getnbr(&s[i]);
  while (s[i] != ' ')
    i = i + 1;
  c = i + 1;
  i = my_getnbr(&s[i + 1]);
  while (s[++c] != ' ');
  tetriminos = triplearray3(fd, s, a , tetriminos);
  if (tetriminos[a][0][1] != 'E')
    my_printf(" Size %d*%d :  Color %d :\n", large, i, my_getnbr(&s[c + 1]));
  return (tetriminos);
}

char	**fillarray(int size, int i, int fd, int a)
{
  char	**array;
  int	n;

  n = 0;
  if ((array = malloc(sizeof(char*) * (i + 1))) == NULL)
    return (NULL);
  while (n < i && array[n - 1] != NULL)
    {
      if ((array[n] = malloc(sizeof(char) * (size + 1))) == NULL)
	return (NULL);
      array[n] = get_next_line(fd);
      if (array[n] != NULL)
	array = stardisplayer(array, n, 0);
      n = n + 1;
    }
  array[n] = NULL;
  return (array);
}
