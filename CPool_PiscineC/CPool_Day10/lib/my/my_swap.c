/*
** my_swap.c for emacs in /home/jules.spender/CPool_Day04
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Thu Oct  6 12:00:43 2016 Jules Spender
** Last update Thu Oct  6 12:29:59 2016 Jules Spender
*/

void	my_putchar();

int	my_swap(int *a, int *b)
{
  int	toerau;

  toerau = *a;
  *a = *b;
  *b = toerau;
  return (0);
}
