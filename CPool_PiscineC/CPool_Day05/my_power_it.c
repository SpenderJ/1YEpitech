/*
** my_power_it.c for emacs in /home/jules.spender/CPool_Day05
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Mon Oct 10 09:44:10 2016 Jules Spender
** Last update Mon Oct 10 10:38:13 2016 Jules Spender
*/

int	my_power_it(int nb, int p)
{
  int	b;
  int	a;
  int	c;

  c = nb;
  a = 1;
  if (p < 0)
      return (0);
  else if (p = 0)
      return (1);
  while (a <= (p + 2))
    {
      b = c * nb;
      b = c;
      a = a + 1;
      if (b >= 2147483648)
	  return (0);
    }
  return (b);
}

      
    
