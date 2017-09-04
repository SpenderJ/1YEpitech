/*
** main.c for emacs in /home/jules/CPE_2016_Pushswap/Pushswap2.0
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 24 02:17:19 2016 Jules Spender
** Last update Sun Nov 27 22:32:16 2016 Jules Spender
*/

#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

int     main(int argc, char **argv)
{
  if (argc == 1)
    return (84);
  if (argc == 2 && argv[1][0] == '0')
    {
      write(1, "\n", 1);
      return (0);
    }
  my_pushswap(argc, argv, 0, 0);
  return (0);
}
