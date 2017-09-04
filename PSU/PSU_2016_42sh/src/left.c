/*
** left.c for emacs in /home/david.xu/Projet/PSU/TEST
** 
** Made by david xu
** Login   <david.xu@epitech.net>
** 
** Started on  Mon May 15 16:39:50 2017 david xu
** Last update Sat May 20 10:45:07 2017 david xu
*/

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "my_h.h"

int	left(char **argv)
{
  int	newfd;

  if ((newfd = open(argv[1], O_RDONLY)) < 0)
    {
      printf("error.\n");
      return (FAILURE);
    }
  dup2(newfd, 0);
  return (SUCCESS);
}

int	return_origine(char **argv)
{
  int	fd;

  if ((fd = open(argv[1], O_RDONLY)) < 0)
    {
      printf("error.\n");
      return (FAILURE);
    }
  dup2(fd, 1);
  return (SUCCESS);
}
