/*
** my_getnbr.c for emacs in /home/jules/CPE_2016_Pushswap
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Mon Nov 21 16:13:52 2016 Jules Spender
** Last update Tue Nov 22 12:13:51 2016 Jules Spender
*/

int	my_getnbr(char *str)
{
  int	i;
  int	u;
  int	nbr;

  i = 0;
  u = 0;
  nbr = 0;
  while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
	 || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
    i++;
  if (str[i] == 45)
    u = 1;
  if ((str[i] == 45) || (str[i] == 43))
    i++;
  while (str[i] >= 48 && str[i] <= 57)
    {
      nbr *= 10;
      nbr += ((int)str[i] - 48);
      i++;
    }
  if (u == 1)
    nbr = -nbr;
  else
    nbr = nbr;
  return (nbr);
}
