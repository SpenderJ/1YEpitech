/*
** todecimal.c for emacs in /home/Jules.Spender/CPool_bistro-matic/Baseur
** 
** Made by Jules Spender
** Login   <Jules.Spender@epitech.net>
** 
** Started on  Fri Nov  4 11:11:40 2016 Jules Spender
** Last update Tue Nov 15 12:56:57 2016 Jules Spender
*/

#include <stdlib.h>
#include <unistd.h>

int	my_strlen(char *str);
int	my_put_nbr(int nb);
void	my_putchar(char c);
int	my_power_it(int nb, int p);
char	*my_putstr(char *str);
char	*tobase(char **argv, char **tabase, int nb);

char	*todecimal(char **argv)
{
  char	**tabase;
  char	*base;
  int	res;
  int	i;
  int	n;
  int	j;

  tabase = malloc(sizeof(char*) * 2);
  tabase[1] = malloc(sizeof(char) * (my_strlen(argv[1]) * my_strlen(argv[2])));
  tabase[2] = malloc(sizeof(char) * (my_strlen(argv[2]) * my_strlen(argv[1])));
  base = malloc(sizeof(char) * (my_strlen(argv[2]) * my_strlen(argv[1])));
  i = 0;
  n = 0;
  while (argv[1][i] != '\0')
    {
      tabase[1][i] = argv[1][i];
      i = i + 1;
    }
  i = 0;
  while (argv[1][i] != '\0')
    {
      tabase[2][i] = i;
      i = i + 1;
    }
  i = 0;
  n = 0;
  while (argv[2][i] != '\0')
    {
      while (argv[2][i] != tabase[1][n])
	  n = n + 1;
      if (argv[2][i] == tabase[1][n])
	{
	  base[i] = tabase[2][n];
	  i = i + 1;
	}
      n = 0;
    }
  n = 0;
  j = my_strlen(argv[2]) - 1;
  i = my_strlen(argv[1]);
  while (argv[2][n] != '\0')
    {
      res = (res) + (base[n]) * (my_power_it(i, j));
      n = n + 1;
      j = j - 1;
    }
  my_put_nbr(res);
  my_putchar('\n');
  return (tobase(argv, tabase, res));
}
