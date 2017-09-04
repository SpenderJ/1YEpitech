/*
** tools.c for my_archive in /home/sacha.riperto/B-CPE/CPE_2016_b2rush1_off/src_my_archive
** 
** Made by Sacha Riperto
** Login   <sacha.riperto@epitech.net>
** 
** Started on  Sat Mar  4 13:00:36 2017 Sacha Riperto
** Last update Sat Mar  4 14:35:20 2017 Sacha Riperto
*/

#include "my.h"

int	puterr(const char *msg)
{
  write(2, msg, strlen(msg));
  return (84);
}
