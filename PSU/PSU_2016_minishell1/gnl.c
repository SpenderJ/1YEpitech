/*
** gnl.c for emacs in /home/jules/CPE/CPE_2016_matchstick
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sun Feb 26 15:53:59 2017 Jules Spender
** Last update Sun Feb 26 19:39:42 2017 Jules Spender
*/

#include <my_h.h>

char	*gnl_strcpy(char *src, char c, int len_line)
{
  int	i;
  char	*dest;

  i = 0;
  if ((dest = malloc(sizeof(char *) * (len_line + 1))) == NULL)
    return (NULL);
  while (i != len_line)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[len_line] = c;
  if (len_line != 0)
    free (src);
  return (dest);
}

int	gnl_read(char *buffer, const int fd, int *i)
{
  int	len_read;

  if ((len_read = read(fd, buffer, BUFFER_SIZE)) < 0)
    return (-1);
  *i = 0;
  return (len_read);
}

char	*return_null_or_zero(char *line, int i, int len_read, int len_line)
{
  if (i - 1 == len_read && len_read != BUFFER_SIZE && !line[i - 1])
    return (NULL);
  else
    return (gnl_strcpy(line, '\0', len_line));
}

char	*get_next_line(const int fd)
{
  static char	buffer[BUFFER_SIZE];
  char	*line;
  int	len_line;
  static int	len_read;
  static int	i;

  len_line = 0;
  line = "";
  if (i == 0)
    len_read = ((len_read = gnl_read(buffer, fd, &i)) <= 0) ? 0 : len_read;
  while (len_read != 0)
    {
      if (i == len_read)
	len_read = ((len_read = gnl_read(buffer, fd, &i)) <= 0) ? 0 : len_read;
      if (buffer[i] == '\n' || (i == len_read && len_read != BUFFER_SIZE))
	{
	  i = i + 1;
	  return (line = return_null_or_zero(line, i, len_read, len_line));
	}
      if ((line = gnl_strcpy(line, buffer[i], len_line)) == NULL)
	return (NULL);
      i = i + 1;
      len_line = len_line + 1;
    }
  return (NULL);
}
