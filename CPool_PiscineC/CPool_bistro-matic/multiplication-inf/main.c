/*
** main.c for emacs in /home/Jules.Spender/CPool_bistro-matic/multiplication-inf
** 
** Made by Jules Spender
** Login   <Jules.Spender@epitech.net>
** 
** Started on  Wed Nov  2 10:23:10 2016 Jules Spender
** Last update Fri Nov  4 19:36:42 2016 Jules Spender
*/

#include <unistd.h>
#include <stdlib.h>


int	my_strlen(char *str);
int	my_putstr(char *str);
char	*multiplicationinf(char **argv);
void	my_putchar(char c);

int	main(int argc, char **argv)
{
  int	i;
  
  i = 0;
  while ((multiplicationinf(argv)[i]) == 0)
    i = i + 1;
  while (i < my_strlen(argv[1]) + my_strlen(argv[2]))
    {
      my_putchar((multiplicationinf(argv)[i]) + 48);
      i = i + 1;
    }
  return (0);
}
  
