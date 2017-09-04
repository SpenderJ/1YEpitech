/*
** left_redirections.c for  in /home/paul/delivery/PSU/PSU_2016_42sh/src
** 
** Made by Paul Bonoron
** Login   <paul.bonoron@epitech.eu>
** 
** Started on  Wed May 17 16:23:51 2017 Paul Bonoron
** Last update Sun May 21 17:18:49 2017 blaise carnevillier
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "../gnl.h"

char	*my_realloc(char *, size_t);
void	print_tab(char **);

int	simple_left_redirection(char **argv)
{
  int	newfd;

  if ((newfd = open(argv[1], O_RDONLY)) < 0)
    {
      printf("error.\n");
      return (84);
    }
  dup2(newfd, 0);
  return (0);
}

void	copy_string(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src != 0)
    dest[i] = src[i++];
  dest[i] = '\0';
}

int	double_left_redirect(char **tab)
{
  int	y;
  int	size;
  char	*str;
  char	*str2;

  y = 0;
  write(1, "? ", 2);
  if ((str2 = malloc(sizeof(char) * (1 + 1))) == NULL)
    return (84);
  while (tab[y])
    {
      if (strcmp(tab[y], "<<") == 0)
  	{
       	  while (((str = get_next_line(0)) != NULL)
		 && strcmp(tab[y + 1], str) != 0)
	    {
	      write(1, "? ", 2);
	      size = strlen(str);
	      str2 = realloc(str, size);
      	    }
	  return (1);
	}
      y += 1;
    }
  return (0);
}

int	main(int ac, char **av)
{
  if (ac == 4)
    double_left_redirect(av);
  return (0);
}
