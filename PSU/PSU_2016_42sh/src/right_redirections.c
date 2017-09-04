/*
** right_redirections.c for  in /home/paul/delivery/PSU/PSU_2016_42sh/src
** 
** Made by Paul Bonoron
** Login   <paul.bonoron@epitech.eu>
** 
** Started on  Wed May 17 16:20:36 2017 Paul Bonoron
** Last update Wed May 17 16:25:18 2017 Paul Bonoron
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my_h.h"

void	simple_right_redirect(char *path, char **tab)
{
  int	fd;
  int	y;

  y = 0;
  if ((fd = open(path, O_RDWR | O_CREAT | O_TRUNC, S_IRWXU)) == ERROR)
    {
      perror("Open ");
      exit(FAILURE);
    }
  while (tab[y] != NULL)
    dprintf(fd, "%s\n" , tab[y++]);
}

void	double_right_redirect(char *path, char **tab)
{
  int	fd;
  int	y;

  y = 0;
  if ((fd = open(path, O_RDWR | O_CREAT | O_APPEND, S_IRWXU)) == ERROR)
    {
      perror("Open ");
      exit(FAILURE);
    }
  while (tab[y] != NULL)
    dprintf(fd, "%s\n" , tab[y++]);
}
