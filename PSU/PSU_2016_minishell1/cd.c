/*
** cd.c for emacs in /home/jules/PSU/PSU_2016_minishell1
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Sun Jan 22 21:09:05 2017 Jules Spender
** Last update Mon Mar 20 11:47:52 2017 Jules Spender
*/

#include "my_h.h"

int	cd(t_first my_controler)
{
  if ((strstr("cd", my_controler.arg[1])) == 0)
    chdir(my_controler.arg[1]);
}
