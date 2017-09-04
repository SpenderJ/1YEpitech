/*
** my_putchar.c for emacs in /home/Jules.Spender/CPool_bistro-matic/multiplication-inf
** 
** Made by Jules Spender
** Login   <Jules.Spender@epitech.net>
** 
** Started on  Wed Nov  2 16:56:39 2016 Jules Spender
** Last update Thu Nov  3 16:09:30 2016 Jules Spender
*/

#include <unistd.h>

void	my_putchar(char c, char *str)
{
  write(1, &c, 1);
}
