/*
** tools.c for my_archive in /home/sacha.riperto/B-CPE/CPE_2016_b2rush1_off/src_my_archive
** 
** Made by Sacha Riperto
** Login   <sacha.riperto@epitech.net>
** 
** Started on  Sat Mar  4 13:00:36 2017 Sacha Riperto
** Last update Sun Mar  5 12:33:58 2017 Sacha Riperto
*/

#include "my.h"

int	puterr(const char *msg)
{
  write(2, msg, strlen(msg));
  return (84);
}

char	*get_name(char *name)
{
  char	*new;
  int	i;

  i = strlen(name);
  while (i >= 0 && name[i] != '/')
    i--;
  i++;
  if (!(new = malloc(sizeof(char) * strlen(&name[i]))))
    return (NULL);
  new = strdup(&name[i]);
  return (new);
}
