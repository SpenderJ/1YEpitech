/*
** gnl.c for emacs in /home/jules/CPE/CPE_2016_matchstick
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sun Feb 26 15:53:59 2017 Jules Spender
** Last update Sun Feb 26 16:37:20 2017 Jules Spender
*/

#include <stdlib.h>
#include <unistd.h>
#include "gnl.h"

char	*my_realloc(char *str, int size)
{
  char	*temp;
  int	i;

  temp = str;
  str = malloc(sizeof(char) * size);
  i = 0;
  while (temp[i])
    {
      str[i] = temp[i];
      i = i + 1;
    }
  free (temp);
  return (str);
}

char	get_char(const int fd)
{
  static char	buff[BUFFER_SIZE];
  static char	*str_buff;
  static int	len;
  char		c;

  len = 0;
  if (len == 0)
    {
      len = read(fd, buff, BUFFER_SIZE);
      str_buff = (char*)&buff;
      if (len == 0)
	return (0);
    }
  c = *str_buff;
  str_buff = str_buff + 1;
  len = len - 1;
  return (c);
}

char	*get_next_line(const int fd)
{
  char	c;
  char	*str;
  int	len;

  len = 0;
  str = malloc(BUFFER_SIZE + 1);
  if (str == NULL)
    return (0);
  c = get_char(fd);
  while (c != '\n' && c != '\0')
    {
      str[len] = c;
      c = get_char(fd);
      len = len + 1;
      if (len % (BUFFER_SIZE + 1) == 0)
	str = my_realloc(str, len + BUFFER_SIZE + 1);
    }
  str[len] = 0;
  if (c == 0 && str[0] == 0)
    return (0);
  return (str);
}
