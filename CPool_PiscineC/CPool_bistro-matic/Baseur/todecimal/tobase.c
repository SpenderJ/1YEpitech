/*
** tobase.c for emacs in /home/Jules.Spender/CPool_bistro-matic/Baseur
** 
** Made by Jules Spender
** Login   <Jules.Spender@epitech.net>
** 
** Started on  Sun Nov  6 17:54:15 2016 Jules Spender
** Last update Sun Nov  6 21:12:52 2016 Jules Spender
*/

#include <unistd.h>
#include <stdlib.h>

int	my_strlen(char *str);
int	my_put_nbr(int nb);
char	*my_putstr(char *str);
void	my_putchar(char c);

char	*tobase(char **argv, char **tabase, int nb)
{
  int	n;
  int	i;
  int	a;
  int	tmp;
  char	*res;
  
  res = malloc(sizeof(char) * (my_strlen(argv[1])));
  n = 0;
  i = 1;
  a = 0;
  while (i < nb)
    i = i * my_strlen(argv[1]);
  a = i;
  a = a / my_strlen(argv[1]);
  while (nb % i >= 1)
    {
      tmp = nb % i;
      res[n] = tmp / a;
      i = i / my_strlen(argv[1]);
      n = n + 1;
      a = a / my_strlen(argv[1]);
    }
  i = 0;
  a = 0;
  while (i <= n)
    {
      while (tabase[2][a] != res[i])
	{
	  a = a + 1;
	}
      if (tabase[2][a] == res[i])
	{
	  res[i] = tabase[1][a];
	  i = i + 1;
	}
      a = 0;
    }
  i = 0;
  while (i <= n)
    {
      my_putchar(res[i]);
      i = i + 1;
    }
  return (0);
}
