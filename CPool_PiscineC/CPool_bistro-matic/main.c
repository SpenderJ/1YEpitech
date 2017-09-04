/*
** main.c for emacs in /home/Jules.Spender/CPool_bistro-matic
** 
** Made by Jules Spender
** Login   <Jules.Spender@epitech.net>
** 
** Started on  Sun Nov  6 21:29:52 2016 Jules Spender
** Last update Sun Nov  6 21:33:57 2016 Jules Spender
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int     my_strlen(char *str);
int     my_put_nbr(int nb);
void    my_putchar(char c);
int     my_power_it(int nb, int p);
char    *my_putstr(char *str);
char    *tobase(char **argv, char **tabase, int nb);
char	*todecimal(char **argv);

int	main(int argc, char **argv)
{
  char		*expr;
  unsigned int	size;

  if (argc != 4)
    {
      my_
