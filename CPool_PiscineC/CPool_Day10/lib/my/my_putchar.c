/*
** my_putchar.c for emacs in /home/jules.spender/CPool_Day10/lib/my
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Mon Oct 17 19:57:41 2016 Jules Spender
** Last update Mon Oct 17 19:58:13 2016 Jules Spender
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
