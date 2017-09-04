/*
** main.c for emacs in /home/Jules.Spender/CPool_evalexpr
** 
** Made by Jules Spender
** Login   <Jules.Spender@epitech.net>
** 
** Started on  Fri Oct 28 11:53:54 2016 Jules Spender
** Last update Fri Oct 28 20:37:00 2016 Jules Spender
*/

#include <unistd.h>
#include <stdlib.h>

int	my_strlen(char *str);
int	calculate_string(char *str);
int	calculate_string2(char *str, char *sortie, char *pile, int i, int n);
int	calculate_string3(char *str, char *sortie, char *pile, int i, int n);
int	calculate_string4(char *str, char *sortie, char *pile, int i, int n);

int	main(int argc, char **argv)
{
  calculate_string(argv[1]);
  return (0);
}
