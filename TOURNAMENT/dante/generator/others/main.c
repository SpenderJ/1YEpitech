/*
** main.c for emacs in /home/jules/TOURNAMENT/dante/generator
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Apr 18 11:24:10 2017 Jules Spender
** Last update Fri May 12 14:53:22 2017 Jules Spender
*/

#include "generator/include/my_h.h"

int	main(int argc, char **argv)
{
  int	i;
  int	pid;

  pid = getpid();
  i = 0;
  srand(time(NULL) * pid * (pid / 42));
  if (argc != 3 && argc != 4)
    return (my_puterr("Usage ./generator x y [perfect]\n", 84));
  if (argc == 3)
    {
      imperfect_maze(my_getnbr(argv[1]), my_getnbr(argv[2]));
      return (0);
    }
  else if (argc == 4)
    {
      perfect_maze(my_getnbr(argv[1]), my_getnbr(argv[2]));
      return (0);
    }
  else
    return (84);
}
