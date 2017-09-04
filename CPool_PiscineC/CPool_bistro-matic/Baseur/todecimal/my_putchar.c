/*
** my_putchar.c for emacs in /home/Jules.Spender/CPool_bistro-matic/Baseur
** 
** Made by Jules Spender
** Login   <Jules.Spender@epitech.net>
** 
** Started on  Fri Nov  4 16:18:29 2016 Jules Spender
** Last update Fri Nov  4 16:18:54 2016 Jules Spender
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
