/*
** getnextline.c for getnextline in /home/hecto/lib
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Mon Mar  6 09:12:16 2017 blaise carnevillier
** Last update Sun Apr  2 17:05:12 2017 Jules Spender
*/

#include "my_h.h"

char		*fill_line(char *buf, char *line, int *i, int j)
{
  while (buf[*i] != '\0' && buf[*i] != '\n')
    {
      line[j] = buf[*i];
      j += 1;
      *i += 1;
    }
  line[j] = '\0';
  return (line);
}

char		*my_realloc(char *str, int size)
{
  int	i;
  int	sizetemp;
  char	*tmp;

  i = 0;
  sizetemp = 0;
  while (str[sizetemp] != '\0')
    sizetemp += 1;
  if ((tmp = malloc(sizeof(char *) * (sizetemp + size + 1))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      tmp[i] = str[i];
      i += 1;
    }
  tmp[i] = '\0';
  free(str);
  return (tmp);
}

char		*malloc_or_realloc(char *line, int *j, int *realloc, int size)
{
  *j = 0;
  if (line == NULL && size > 0)
    {
      if ((line = malloc(sizeof(char *) * (size + 1) + 10)) == NULL)
	return (NULL);
    }
  else if (*realloc == 1)
    {
      while (line[*j] != '\0')
	*j += 1;
      if ((line = my_realloc(line, READ_SIZE)) == NULL)
	return (NULL);
      *realloc = 0;
    }
  else
    {
      if ((line = malloc(sizeof(char *) * (size + 1))) == NULL)
	return (NULL);
    }
  return (line);
}

char		*create_line(char *buf, int readsize)
{
  static int	indice = 0;
  static char	*line = NULL;
  static int	need_realloc = 0;
  int		i;
  int		j;

  i = indice;
  if ((line = malloc_or_realloc(line, &j, &need_realloc, readsize)) == NULL)
    return (NULL);
  line = fill_line(buf, line, &i, j);
  if (buf[i] == '\n')
    {
      indice = i + 1;
      return (line);
    }
  else if (readsize == 0 && line != NULL && line[0] != '\0')
    return (line);
  else
    {
      indice = 0;
      need_realloc = 1;
      return (NULL);
    }
}

char		*get_next_line(const int fd)
{
  static char	buf[READ_SIZE];
  static int	readsize = 0;
  static int	last_line = 0;
  int		i;
  char		*str;

  str = NULL;
  if (readsize == 0)
    readsize = read(fd, buf, READ_SIZE);
  while (readsize > 0)
    {
      while ((str = create_line(buf, readsize)) != NULL)
	return (str);
      i = 0;
      while (i < READ_SIZE)
	{
	  buf[i] = '\0';
	  i += 1;
	}
      readsize = read(fd, buf, READ_SIZE);
    }
  if ((str = create_line(buf, readsize)) != NULL && last_line == 0)
    last_line = 1;
  return (0);
}
