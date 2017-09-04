/*
** my_putchar.c for emacs in /home/david.xu/CPool_infinadd
** 
** Made by david xu
** Login   <david.xu@epitech.net>
** 
** Started on  Wed Oct 26 16:17:06 2016 david xu
** Last update Wed Oct 26 16:18:25 2016 david xu
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
