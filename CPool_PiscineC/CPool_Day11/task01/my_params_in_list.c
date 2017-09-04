/*
** my_params_in_list.c for emacs in /home/jules.spender/CPool_Day11/task01
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Tue Oct 18 10:33:51 2016 Jules Spender
** Last update Wed Oct 19 09:22:59 2016 Jules Spender
*/

#include <stdlib.h>
#include <unistd.h>
#include "../include/mylist.h"

t_list	*my_putlist(struct s_list *list, void *str)
{
  struct s_list *element;
  
  element = malloc(sizeof(*element));
  element -> data = str;
  element -> next = list;
  return (element);
}

t_list	*my_params_in_list(int ac, char **av)
{
  struct s_list *next;
  int		n;

  n = 0;
  next = NULL;
  while (n < ac)
    {
      next = my_putlist(next, av[n]);
      n = n + 1;
    }
  return (next);
}

int	main(int ac, char **av)
{
  my_params_in_list(ac, av);
  return (0);
}
