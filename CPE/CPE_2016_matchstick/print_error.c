/*
** print_error.c for emacs in /home/jules/CPE/CPE_2016_matchstick
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Wed Feb 22 09:51:46 2017 Jules Spender
** Last update Fri Feb 24 14:36:04 2017 Jules Spender
*/

#include "my_h.h"

void	print_error(int param)
{
  my_putstr("Error: you cannot remove more than ");
  my_put_nbr(param);
  my_putstr(" matches per turn\n");
}

int	param_verifierline(int line, char **argv, char **map)
{
  int	i;

  i = 0;
  if (line == -30071998 || line > my_getnbr(argv[1]) || line == 0)
    {
      if (line > my_getnbr(argv[1]) || line == 0)
	my_putstr("Error: this line is out of range\n");
      else if (line == -30071998)
	my_putstr("Error: invalid input(positive number expected)\n");
      player_turn(map, argv, 0, 0);
      return (-1);
    }
  return (0);
}
