/*
** my_fact_it.c for emacs in /home/jules.spender/CPool_Day05
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Mon Oct 10 08:17:09 2016 Jules Spender
** Last update Mon Oct 10 09:06:36 2016 Jules Spender
*/
   
void	my_fact_it(int nb)
{
  int	a;
  int	z;
  int	y;

  y = 1;
  a = 1;
  if (nb >= 13 || nb < 0)
    {
      return (0);
    }
  else if (nb == 0)
    {
      return (1);
    }
  else
    {
      while (a != nb)
	{
	  z = y * (a + 1);
	  a = a + 1;
	  y = z;
	}
    }
  return (z);
}
