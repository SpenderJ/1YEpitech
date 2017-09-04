/*
** ia_turn2.c for emacs in /home/jules/CPE/CPE_2016_matchstick
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Feb 23 13:57:26 2017 Jules Spender
** Last update Tue Apr  4 15:49:55 2017 Jules Spender
*/

#include "my_h.h"

char	**finishthegame(char **map, int min, int compteur, int i)
{
  while (map[min][i] != '\0')
    {
      if (map[min][i] == '|')
	compteur = compteur + 1;
      i = i + 1;
    }
  i = i - 1;
  if (compteur == 1)
    compteur = 2;
  my_printer(compteur, min);
  while (i >= 0 && compteur > 1)
    {
      if (map[min][i] == '|')
	{
	  compteur = compteur - 1;
	  map[min][i] = ' ';
	}
      i = i - 1;
    }
  return (map);
}

void	my_printer(int compteur, int min)
{
  my_putstr("AI removed ");
  my_put_nbr(compteur - 1);
  my_putstr(" match(es) from line ");
  my_put_nbr(min + 1);
  my_putchar('\n');
}

char	**pray4thewin(char **map, int min)
{
  int	i;

  i = 0;
  while (map[min][i] != '\0')
    i = i + 1;
  i = i - 1;
  while (map[min][i] != '|')
    i = i - 1;
  map[min][i] = ' ';
  my_putstr("AI removed 1");
  my_putstr(" match(es) from line ");
  my_put_nbr(min + 1);
  my_putchar('\n');
  return (map);
}
