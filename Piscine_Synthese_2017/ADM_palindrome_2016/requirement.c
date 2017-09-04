/*
** requirement.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_palindrome_2016
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Thu Jun 15 09:04:36 2017 Jules Spender
** Last update Thu Jun 15 09:51:56 2017 Jules Spender
*/

int	my_factrec_synthesis(int nb)
{
  int	i;

  i = 0;
  if (nb == 1 || nb == 0)
    return (1);
  else if (nb < 13 && nb > 0)
    return ((i = nb * my_factrec_synthesis(nb - 1)));
  else
    return (0);
}

int	my_squareroot_synthesis(int nb)
{
  int	g;
  int	d;
  int	n;
  int	m;
  int	p;
  
  g = 0;
  d = nb / 2;
  n = 0;
  while (g < d && n != 1)
    {
      m = (g + d) / 2;
      if (((p = m * m) == p) && nb == p)
	n = 1;
      else
	{
	  if (nb > p && ((g = m + 1) == g));
	  else if ((d = m - 1) == d);
	}
    }
  if ((((g + d) / 2) * ((g + d) / 2)) == nb)
    return (((g + d) / 2));
  else if (nb == 0 || nb == 1)
    return (nb);
  return (-1);
}
