/*
** my_fact_rec.c for emacs in /home/jules.spender/CPool_Day05
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Mon Oct 10 09:23:32 2016 Jules Spender
** Last update Mon Oct 10 09:39:58 2016 Jules Spender
*/

void	my_fact_rec(int nb)
{
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
      return (nb * my_fact_rec(nb -1));
    }
}

