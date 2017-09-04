/*
** ia_turn.c for emacs in /home/jules/CPE/CPE_2016_matchstick
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Wed Feb 22 10:47:14 2017 Jules Spender
** Last update Tue Apr  4 15:33:15 2017 Jules Spender
*/

#include "my_h.h"

char	**ia_turn(char **map, char **argv, int i, int a)
{
  int	maxsize;
  int	linenumber;
  int	min;
  int	filledlinenumber;

  maxsize = my_getnbr(argv[2]);
  linenumber = my_getnbr(argv[1]) - 1;
  min = linefilled(map, my_getnbr(argv[1]) - 1, 0);
  filledlinenumber = blankline(map, linenumber, 0);
  if (filledlinenumber >= 2)
    {
      map = bot3(map, min, maxsize, 0);
      my_displayer(map, my_getnbr(argv[1]), 0);
    }
  else if (filledlinenumber == 1)
    {
      map = bot1(map, min, maxsize);
      my_displayer(map, my_getnbr(argv[1]), 0);
    }
  return (map);
}

char	**bot1(char **map, int min, int maxsize)
{
  int	i;
  int	compteur;

  i = 0;
  while (map[min][i] != '\0')
    {
      if (map[min][i] == '|')
	compteur = compteur + 1;
      i = i + 1;
    }
  compteur = compteur - 1;
  if (maxsize + 1 >= compteur)
    map = finishthegame(map, min, 0, 0);
  else
    map = pray4thewin(map, min);
  return (map);
}

char	**bot3(char **map, int min, int maxsize, int i)
{
  int	compteur;

  compteur = 0;
  while (map[min][i] != '\0')
    i = i + 1;
  i = i - 1;
  while (maxsize > 0 && i >= 0)
    {
      if (map[min][i] == '|')
	{
	  compteur = compteur + 1;
	  map[min][i] = ' ';
	  maxsize = maxsize - 1;
	}
      i = i - 1;
    }
  my_putstr("AI removed ");
  my_put_nbr(compteur);
  my_putstr(" match(es) from line ");
  my_put_nbr(min + 1);
  my_putchar('\n');
  return (map);
}

int	linefilled(char **map, int linenumber, int a)
{
  int	max;
  int	i;
  int	oldmax;

  i = 0;
  a = 0;
  oldmax = 1000;
  while (linenumber >= 0)
    {
      while (map[linenumber][a] != '\0')
	{
	  if (map[linenumber][a] == '|')
	    i = i + 1;
	  a = a + 1;
	}
      if (i <= oldmax && i > 0)
	{
	  oldmax = i;
	  max = linenumber;
	}
      linenumber = linenumber - 1;
      a = 0;
      i = 0;
    }
  return (max);
}

int	blankline(char **map, int linenumber, int i)
{
  int	a;
  int	nbr;

  nbr = 0;
  a = 0;
  while (linenumber >= 0)
    {
      i = 0;
      while (map[linenumber][i] != '\0')
	{
	  if (map[linenumber][i] == '|')
	    a = 1;
	  i = i + 1;
	}
      if (a == 1)
	nbr = nbr + 1;
      a = 0;
      linenumber = linenumber - 1;
    }
  return (nbr);
}
