/*
** game.c for emacs in /home/jules/CPE/CPE_2016_matchstick
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Mon Feb 20 14:24:16 2017 Jules Spender
** Last update Tue Apr  4 15:49:25 2017 Jules Spender
*/

#include "my_h.h"

int	game(char **map, char **argv)
{
  int	i;

  i = 0;
  while (i != 1 && i != 2)
    {
      my_putstr("\nYour turn:\n");
      map = player_turn(map, argv , 0, 0);
      if (map == NULL)
	return (0);
      i = checkwin(map, 0);
      if (i == 1)
	i = 2;
      if (i != 2)
	{
	  my_putstr("\nAI's turn...\n");
	  map = ia_turn(map, argv, 0, 0);
	  if (map == NULL)
	    return (0);
	  i = checkwin(map, 0);
	}
    }
  return (i);
}

char	**player_turn(char **map, char **argv, int i, int line)
{
  int	matches;

  my_putstr("Line: ");
  line = my_getnbr(get_next_line(0));
  if (line == -6101998)
    return (NULL);
  i = param_verifierline(line, argv, map);
  if (i != -1)
    {
      my_putstr("Matches: ");
      matches = my_getnbr(get_next_line(0));
      if (matches == -6101998)
	return (NULL);
      if ((i = param_verifierMatches(matches, map, argv, line - 1)) != -3)
	{
	  my_putstr("Player removed ");
	  my_put_nbr(matches);
	  my_putstr(" match(es) from line ");
	  my_put_nbr(line);
	  my_putchar('\n');
	  map = map_modifier(map, line - 1, matches);
	  my_displayer(map, my_getnbr(argv[1]), 0);
	}
    }
  return (map);
}

char	**map_modifier(char **map, int line, int nbr)
{
  int	i;

  i = 0;
  while (map[line][i] != '\0')
    i = i + 1;
  i = i - 1;
  while (nbr > 0)
    {
      if (map[line][i] == ' ')
	i = i - 1;
      else
	{
	  map[line][i] = ' ';
	  nbr = nbr - 1;
	  i = i - 1;
	}
    }
  return (map);
}

int	param_verifierMatches(int p, char **map, char **argv, int line)
{
  int	i;
  int	a;

  i = 0;
  a = 0;
  while (map[line][i] != '\0')
    {
      if (map[line][i] == '|')
	a = a + 1;
      i = i + 1;
    }
  if (p == -30071998 || p > a || p <= 0 || my_getnbr(argv[2]) < p)
    {
      if (p == -30071998)
	my_putstr("Error: invalid input (positive number expected)\n");
      else if (my_getnbr(argv[2]) < p)
	print_error(my_getnbr(argv[2]));
      else if (p > a)
	my_putstr("Error: not enough matches on this line\n");
      else if (p <= 0)
	my_putstr("Error: you have to remove at least one match\n");
      player_turn(map, argv, 0, 0);
      return (-3);
    }
  return (0);
}

int	checkwin(char **map, int n)
{
  int	i;
  int	a;

  i = 0;
  while (map[0][i] != '\0')
    i = i + 1;
  i = i - 1;
  n = (i / 2);
  i = 0;
  a = 0;
  while (i <= n)
    {
      while (map[i][a] != '\0')
	{
	  if (map[i][a] == '|')
	    return (0);
	  a = a + 1;
	}
      a = 0;
      i = i + 1;
    }
  return (1);
}
