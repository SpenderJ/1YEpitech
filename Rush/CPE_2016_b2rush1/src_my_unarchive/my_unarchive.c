/*
** my_unarchive.c for my_unarchive in /home/sacha.riperto/B-CPE/CPE_2016_b2rush1_off/src_my_archive
** 
** Made by Sacha Riperto
** Login   <sacha.riperto@epitech.net>
** 
** Started on  Sat Mar  4 10:21:33 2017 Sacha Riperto
** Last update Sun Mar  5 15:08:47 2017 Sacha Riperto
*/

#include "my.h"

int	arc_file(int fd_arc)
{
  int	fd;
  char	*s;
  int	i;

  fd = -1;
  while ((s = get_next_line(fd_arc)))
    {
      if (strncmp(s, "START: ", 7) == 0)
	{
	  i = 0;
	  while (s[i] != ' ')
	    i++;
	  fd = open(&s[++i], O_CREAT|O_WRONLY, S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);
	}
      else
	if (fd != -1)
	  dprintf(fd, "%s\n", s);
      free(s);
    }
  if (fd != -1)
    close(fd);
  return (0);
}

int	my_unarchive(char *arc_name)
{
  int	fd_arc;

  if ((fd_arc = open(arc_name, O_RDONLY)) == -1)
    return (puterr("Can't open archive\n"));
  if (arc_file(fd_arc) == 84)
    return (84);
  close(fd_arc);
  return (0);
}

int	main(int ac, char **av)
{
  if (ac < 2)
    return (puterr("Usage: ./my_unarchive [archive_name]\n"));
  else
    return (my_unarchive(av[1]));
  return (0);
}
