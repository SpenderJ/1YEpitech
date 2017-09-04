/*
** print_tab.c for  in /home/paul/delivery/PSU/PSU_2016_42sh/src/left_redirection
** 
** Made by Paul Bonoron
** Login   <paul.bonoron@epitech.eu>
** 
** Started on  Sat May 20 11:45:50 2017 Paul Bonoron
** Last update Sat May 20 12:30:20 2017 Paul Bonoron
*/

#include <stdio.h>

void	print_tab(char **tab)
{
  int	y;

  y = 0;
  while (tab[y])
    printf("%s\n", tab[y++]);
}
