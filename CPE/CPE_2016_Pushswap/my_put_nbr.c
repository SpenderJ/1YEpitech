/*
** my_put_nbr.c for emacs in /home/jules.spender/CPool_Day03
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct  5 19:53:35 2016 Jules Spender
** Last update Thu Oct  6 20:21:57 2016 Jules Spender
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
    {
      a *= 10;
    }
  while (a >= 1)
    {
      b = nbr / a + 48;
      nbr = nbr % a;
      a /= 10;
      my_putchar(b);
    }
  return (0);
}
    
