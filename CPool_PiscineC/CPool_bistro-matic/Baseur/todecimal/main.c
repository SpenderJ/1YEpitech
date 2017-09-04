/*
** main.c for emacs in /home/Jules.Spender/CPool_bistro-matic/Baseur
** 
** Made by Jules Spender
** Login   <Jules.Spender@epitech.net>
** 
** Started on  Fri Nov  4 16:20:05 2016 Jules Spender
** Last update Tue Nov 15 12:51:40 2016 Jules Spender
*/

#include <unistd.h>

int	my_strlen(char *str);
int	my_put_nbr(int nb);
int	todecimal(char **argv);
void	my_putchar(char c);
char	*my_putstr(char *str);
char	*tobase(char **argv, char **tabase, int nb);

int	main(int argc, char **argv)
{
  todecimal(argv);
  return (0);
}
