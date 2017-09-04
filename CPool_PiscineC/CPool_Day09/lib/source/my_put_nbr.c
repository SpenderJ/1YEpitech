/*
** my_put_nbr.c for emacs in /home/jules.spender/CPool_Day07
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct 12 12:07:37 2016 Jules Spender
** Last update Fri Oct 14 08:21:41 2016 Jules Spender
*/

void	my_putchar(char c);

int	my_put_nbr(int nb)
{
  int	a;
  char	b;
  long	nbr;

  nbr = nb;
  a = 1;
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = -nbr;
    }
  while ((nbr / a) >= 10)
    a *= 10;
  while (a >= 1)
    {
      b = nbr / a + 48;
      nbr = nbr % a;
      a /= 10;
      my_putchar(b);
    }
  return (0);
}
