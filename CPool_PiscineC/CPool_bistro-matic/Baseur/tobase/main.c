/*
** main.c for emacs in /home/Jules.Spender/CPool_bistro-matic/Baseur
** 
** Made by Jules Spender
** Login   <Jules.Spender@epitech.net>
** 
** Started on  Fri Nov  4 16:20:05 2016 Jules Spender
** Last update Sun Nov  6 20:37:40 2016 Jules Spender
*/

#include <unistd.h>

int	my_strlen(char *str);
int	my_put_nbr(int nb);
int	tobase(char **argv, int nb);
void	my_putchar(char c);
char	*my_putstr(char *str);

int	main(int argc, char **argv)
{
  int	nb;

  nb = 42;
  tobase(argv, nb);
  return (0);
}
