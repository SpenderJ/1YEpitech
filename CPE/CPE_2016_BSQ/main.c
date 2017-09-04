/*
** main.c for emacs in /home/jules/CPE/CPE_2016_BSQ
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Dec  8 15:04:25 2016 Jules Spender
** Last update Sun Dec 18 19:45:56 2016 Jules Spender
*/

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "include/my.h"

int	my_error(int argc, char **argv)
{
  int	i;

  i = 0;
  if (argc < 2 || argc > 2)
    {
      write(2, "Error in Number of Argument.", 28);
      return (84);
    }
  i = open(argv[1], O_RDONLY);
  if (i == -1)
    {
      write(2, "Error, wrong arguments", 22);
      return (84);
    }
  close (i);
  return (0);
}

int	my_atoi(char *str)
{
  int	i;
  int	negative;
  int	number;

  i = 0;
  negative = 0;
  number = 0;
  if (str[i] == 45)
    negative = 1;
  if ((str[i] == 45) || (str[i] == 43))
    i++;
  while (str[i] >= 48 && str[i] <= 57)
    {
      number *= 10;
      number += ((int)str[i] - 48);
      i++;
    }
  if (negative == 1)
    return (-number);
  else
    return (number);
}

int	my_square(char *str, int column_number, int place_number)
{
  int	square_side;
  int	map_vertical_size;
  int	map_horizontal_size;

  square_side = 1;
  map_vertical_size = 0;
  map_horizontal_size = 0;
  map_vertical_size = vertical_size(str);
  map_horizontal_size = horizontal_size(only_map(str));
  str_to_array(only_map(str), map_vertical_size, map_horizontal_size);
  return (0);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}

int	main(int argc, char **argv)
{
  int	i;
  int	a;
  struct stat	s;

  if (stat(argv[1], &s) != 0)
    {
      write(2, "Error", 5);
      return (84);
    }
  a = s.st_size;
  i = my_error(argc, argv);
  if (i == 84)
    return (84);
  my_map_to_str(argv, 0, a);
  return (0);
}
