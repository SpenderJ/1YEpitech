/*
** my_power_it.c for emacs in /home/jules.spender/CPool_Day05
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Mon Oct 10 09:44:10 2016 Jules Spender
** Last update Sun Nov  6 14:38:02 2016 Jules Spender
*/

int	my_power_it(int nb, int p)
{
  int	i;
  int	n;

  i = nb;
  if (p < 0)
    return (0);
  else if (p == 0)
    return (1);
  else if (p == 1)
    return (nb);
  else
    while (p >= 2)
      {
	i = i * nb;
	p = p - 1;
      }
  return (i);
}

      
    
