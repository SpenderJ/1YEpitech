/*
** get_next_line.c for get_next_line in /home/sacha.riperto/B-CPE/CPE_2016_getnextline1
** 
** Made by Sacha Riperto
** Login   <sacha.riperto@epitech.net>
** 
** Started on  Wed Feb 22 09:29:18 2017 Sacha Riperto
** Last update Sun Jun 18 17:06:37 2017 Jules Spender
*/

#include "my_h.h"

char	*reayoloc(char *buffer, char *line, int *i, int size)
{
  char	*new_line;
  int	n;

  n = (*i);
  while (n < size && buffer[n] != '\n')
    n++;
  if (!(new_line = malloc(sizeof(char) * (my_strlen(line) + n + 1))))
    return (NULL);
  n = 0;
  while (line && line[n])
    {
      new_line[n] = line[n];
      n++;
    }
  while ((*i) < size && buffer[(*i)] != '\n')
    {
      new_line[n] = buffer[(*i)];
      n++;
      (*i)++;
    }
  new_line[n] = '\0';
  if (line)
    free(line);
  return (new_line);
}

char		*get_next_line(const int fd)
{
  static char	buffer[READ_SIZE];
  static int	i = 0;
  static int	size = 0;
  char		*line;

  line = NULL;
  while (fd != -1 && (i > 0 || (size = read(fd, buffer, READ_SIZE)) > 0))
    {
      line = reayoloc(buffer, line, &i, size);
      if (buffer[i] == '\n')
	{
	  i++;
	  if (i == size)
	    i = 0;
	  return (line);
	}
      if (i == size)
	i = 0;
    }
  return (line);
}
