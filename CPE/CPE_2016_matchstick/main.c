/*
** main.c for emacs in /home/jules/CPE/CPE_2016_matchstick
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Mon Feb 20 11:15:16 2017 Jules Spender
** Last update Tue Apr  4 15:45:03 2017 Jules Spender
*/

#include "my_h.h"

int	main(int argc, char **av)
{
  int	i;
  char	**map;

  i = 0;
  if (argc != 3)
    {
      write(2, "Wrong Argument Number: Usage /matchstick [Pyramid Size] ", 55);
      write(2, "[Maximum Number of Match to remove]\n", 36);
      return (84);
    }
  if (my_getnbr(av[1]) < 1 || my_getnbr(av[1]) > 100 || my_getnbr(av[2]) <= 0)
    {
      write(2, "Wrong Argument Number: Usage /matchstick [Pyramid Size] ", 55);
      write(2, "[Maximum Number of Match to remove]\n", 36);
      return (84);
    }
  my_displayer(map_generator(my_getnbr(av[1])), my_getnbr(av[1]), 0);
  i = game(map_generator(my_getnbr(av[1])), av);
  if (i == 1)
    my_putstr("I lost... snif... but I’ll get you next time!!\n");
  if (i == 2)
    my_putstr("You lost, too bad...\n");
  return (i);
}
