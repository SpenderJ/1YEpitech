/*
** my_power_rec.c for emacs in /home/jules.spender/CPool_Day05
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Mon Oct 10 10:33:35 2016 Jules Spender
** Last update Mon Oct 10 10:42:44 2016 Jules Spender
*/

int	my_power_rec(int nb, int p)
{
  if (p < 0)
    return (0);
  else if (p = 0)
    reurn (1);
  else
    {
      return (nb * my power_rec(nb, p-1));
    }
}
  
