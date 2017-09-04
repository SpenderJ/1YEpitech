/*
** main.c for emacs in /home/jules/CPE/CPE_2016_getnextline
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Mon Jan 16 13:36:41 2017 Jules Spender
** Last update Sun Feb 26 16:42:39 2017 Jules Spender
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "gnl.h"

int	main(int argc, char **argv)
{
  char	*str;

  str = malloc(sizeof(char) * 10);
  str = get_next_line(0);
  printf("%s\n", str);
  return (0);
}
