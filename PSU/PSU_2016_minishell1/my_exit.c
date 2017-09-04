/*
** exit.c for emacs in /home/jules/PSU/PSU_2016_minishell1
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Sun Jan 22 21:16:20 2017 Jules Spender
** Last update Mon Mar 20 11:48:08 2017 Jules Spender
*/

#include "my_h.h"

void	my_exit(t_first my_controler)
{
  if ((strstr("exit", my_controler.arg[0])) == 0)
    exit(EXIT_SUCCESS);
}
