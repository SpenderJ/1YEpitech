/*
** my_archive.c for my_archive in /home/sacha.riperto/B-CPE/CPE_2016_b2rush1_off/src_my_archive
** 
** Made by Sacha Riperto
** Login   <sacha.riperto@epitech.net>
** 
** Started on  Sat Mar  4 10:21:33 2017 Sacha Riperto
** Last update Sun Mar  5 17:14:58 2017 Sacha Riperto
*/

#include "my.h"

int	arc_file(int fd_arc, char *name)
{
  int	fd;
  char	*s;

  if ((fd = open(name, O_RDONLY)) == -1)
    {
      printf("%s: ", name);
      return (puterr("Failed to open file\n"));
    }
  name = get_name(name);
  dprintf(fd_arc, "START: %s\n", name);
  while ((s = get_next_line(fd)))
    dprintf(fd_arc, "%s\n", s);
  close(fd);
  return (0);
}

int		arc_dir(int fd_arc, char *dir_name, DIR *dir)
{
  struct dirent	*dirent;
  char		*name;

  dprintf(fd_arc, "START_DIR: %s\n", dir_name);
  while ((dirent = readdir(dir)))
    {
      name = strdup(dir_name);
      strcat(name, "/");
      strcat(name, dirent->d_name);
      if (strcmp(get_name(name), ".") != 0 &&
	  strcmp(get_name(name), "..") != 0)
	{
	  if (dirent->d_type == DT_DIR)
	    {
	      if (is_dir(fd_arc, name) == 84)
		return (84);
	    }
	  else
	    if (arc_file(fd_arc, name) == 84)
	      return (84);
	}
    }
  dprintf(fd_arc, "END_DIR: %s\n", dir_name);
  return (0);
}

int	is_dir(int fd_arc, char *file)
{
  DIR	*dir;

  if ((dir = opendir(file)))
    {
      if (arc_dir(fd_arc, file, dir) == 84)
	return (84);
    }
  else
    if (arc_file(fd_arc, file) == 84)
      return (84);
  return (0);
}

int	my_archive(char *arc_name, char **files)
{
  int	fd_arc;
  int	i;

  i = 0;
  fd_arc = open(arc_name, O_CREAT|O_WRONLY, S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);
  while (files[i])
    {
      if (is_dir(fd_arc, files[i]) == 84)
	{
	  close(fd_arc);
	  return (84);
	}
      i++;
    }
  close(fd_arc);
  return (0);
}

int	main(int ac, char **av)
{
  if (ac < 3)
    return (puterr("Usage: ./my_archive [archive_name] [files ...]\n"));
  else
    return (my_archive(av[1], &av[2]));
}
