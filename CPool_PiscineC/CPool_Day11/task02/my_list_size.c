/*
** my_list_size.c for emacs in /home/jules.spender/CPool_Day11/task02
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Tue Oct 18 13:44:20 2016 Jules Spender
** Last update Tue Oct 18 13:52:36 2016 Jules Spender
*/

#include <unistd.h>
#include "../include/mylist.h"

int	my_list_size(t_list *begin)
{
  int	i;

  i = 1;
  while (begin->next != NULL)
    {
      begin = begin->next;
      i = i + 1;
    }
  return (i);
}
