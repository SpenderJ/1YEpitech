/*
** wait.c for emacs in /home/jules/PSU/PSU_2016_devtetris/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Mar 20 12:23:17 2017 Jules Spender
** Last update Tue Mar 21 10:22:14 2017 Jules Spender
*/

#include "my_h.h"

int	wait_touch()
{
  int	fd;
  int	flags;
  int	ret;
  char	buf[16];

  ret = 0;
  fd = 0;
  buf[0] = '~';
  buf[1] = '~';
  //  flags = fcntl(fd, F_GETFL, 0);
  //  fcntl(fd, F_SETFL, flags | O_NONBLOCK);
  while (42)
    {
      ret = read(fd, buf, 16);
      if (buf[0] != '~')
	return (0);
      if (buf[1] != '~')
	return (0);
    }
  return (0);
}
