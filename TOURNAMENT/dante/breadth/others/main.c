/*
** main.c for emacs in /home/jules/TOURNAMENT/dante/breadth/others
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Apr 24 17:09:31 2017 Jules Spender
** Last update Fri May 12 15:53:32 2017 Jules Spender
*/

#include "breadth/include/my_h.h"

int	main(int argc, char **argv)
{
  int	i;
  char	**arr;

  i = 0;
  if (argc != 2)
    return (my_puterr("Wrong Argument Number.\nUsage ./generator x y [perfect]\n", 84));
  if ((arr = get_maze(argv[1])) == NULL)
    return (84);
  return (0);
}

char	**get_maze(char	*str)
{
  char	**map;
  int	i;
  int	fd;

  i = -1;
  if ((fd = open(str, O_RDONLY)) == -1)
    return (my_puterr("Wrong Usage: ./solver [Name of the file containing the map]\n", 84), NULL);
  map = malloc(sizeof(char*) * 10002);
  while ((map[++i] = get_next_line(fd)) != NULL);
  close(fd);
  if (map == NULL)
    return (my_puterr("Wrong Usage: ./solver [Name of the file]\n", 84), NULL);
  if ((i == check_map(map)) == 84)
    return (my_puterr("Wrong Map: Check The Format of your map\n", 84), NULL);
  resolve(map);
  i = -1;
  /*  while (map[++i] != NULL)
    free(map[i]);
    free(map);*/
  return (0);
}

int	check_map(char **map)
{
  int	i;
  int	a;
  int	larg;

  i = -1;
  a = -1;
  larg = -8;
  while (map[++a] != NULL)
    {
      while (map[a][++i] != '\0')
	{
	  if (map[a][i] != '*' || map[a][i] != 'X' || map[a][i] != '\n')
	    return (84);
	}
      if (larg == -8)
	larg = i;
      else
	{
	  if (larg != i)
	    return (84);
	}
      i = -1;
    }
  return (0);
}
      
