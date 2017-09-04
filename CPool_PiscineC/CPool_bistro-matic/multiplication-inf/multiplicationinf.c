/*
** multiplicationinf.c for emacs in /home/Jules.Spender/CPool_bistro-matic/multiplication-inf
** 
** Made by Jules Spender
** Login   <Jules.Spender@epitech.net>
** 
** Started on  Wed Nov  2 08:48:07 2016 Jules Spender
** Last update Fri Nov  4 17:43:40 2016 Jules Spender
*/

#include <stdlib.h>
#include <unistd.h>

char	*zero(char **argv);
int	my_putstr(char *str);
int	my_strlen(char *str);
void	my_putchar(char c);

char	*multiplicationinf(char **argv)
{
  char	*res;
  int	multipli;
  int	i;
  int	n;

  i = my_strlen(argv[1]) - 1;
  res = malloc(sizeof(int) * (i + 1 + my_strlen(argv[2]) + 1));
  res[my_strlen(argv[1]) + my_strlen(argv[2])] = 0;
  while (i >= 0)
    {
      n = my_strlen(argv[2]) - 1;
      while (n >= 0)
	{
	  multipli = (argv[1][i] - '0') * (argv[2][n] - '0');
	  res[i + n] += ((res[i + n + 1] + multipli) / 10);
	  res[i + n + 1] = (res[i + n + 1] + multipli) % 10;
	  n = n - 1;
	}
      i = i - 1;
    }
  return (res);
}
