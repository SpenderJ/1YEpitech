/*
** double_pipe.c for emacs in /home/ugo/PSU_2016_42sh/src
** 
** Made by Ugo
** Login   <ugo.bensaid@epitech.eu@epitech.net>
** 
** Started on  Tue May 16 13:39:58 2017 Ugo
** Last update Sat May 20 10:43:11 2017 david xu
*/

#include <stdlib.h>
#include "my_h.h"

int     double_pipe(char **tab, int i)
{
  if ((my_exec()) == SUCCESS)
    return (SUCCESS);
  else
    {
      if ((my_exec()) == SUCCESS)
	return (SUCCESS);
    }
  return (FAILURE);
}
