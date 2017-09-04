/*
** main.c for emacs in /home/jules/PSU/test/test2
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Mar 20 16:02:28 2017 Jules Spender
** Last update Mon Mar 20 16:59:48 2017 Jules Spender
*/

#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int	main()
{
  int     mode;
  int     ret;
  char    buf[512];
  int     fd;
  
  fd = 0;
  mode = fcntl(fd, F_GETFL, 0);
  mode |= O_NONBLOCK;
  fcntl(fd, F_SETFL, mode);
  while (42)
    {
      ret = read(fd, buf, 511);
      buf[ret] = 0;
      sleep(1);
      printf("\n BUFFER = '%s'\n",buf);
      if (buf[0] != '~')
	return (0);
      if (buf[1] != '~')
	return (0);
      printf("Buf = '%s'\n", buf);
    }
  return (1);
}
