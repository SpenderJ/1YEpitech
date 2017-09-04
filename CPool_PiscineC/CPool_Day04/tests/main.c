/*
** main.c for emacs in /home/jules.spender/CPool_Day04/tests
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Thu Oct  6 11:52:38 2016 Jules Spender
** Last update Thu Oct  6 19:51:58 2016 Jules Spender
*/

#include <unistd.h>
int	my_swap();
int	my_evil_str();
int	my_putstr();
int	my_strlen();

void	my_putchar(char c)
{
  write (1, &c, 1);
}
int	main(void)
{
  char	k[6] = "ABCDE";

  my_evil_str(k);
  my_putstr(k);
  return (0);
}
