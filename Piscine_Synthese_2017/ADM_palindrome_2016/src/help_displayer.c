/*
** help_displayer.c for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 12 10:34:23 2017 Jules Spender
** Last update Thu Jun 15 10:38:51 2017 Jules Spender
*/

#include "my_h.h"

int	help_displayer(char *str)
{
  printf("USAGE\n\t");
  printf("%s", str);
  printf(" -n number -p palindrome [-b base] [-imin i] [-imax i]\n");
  printf(" DESCRIPTION\n\n\t-n nb\t\tinteger to be transformed (≥ 0)\n");
  printf("\t-p pal\t\tpalindromic number to be obtained (incompatible");
  printf("with the −n option) (≥ 0)\n");
  printf("\t\tif defined, all fitting values of n will be output\n");
  printf("\t-b base\t\tbase in which the procedure will ");
  printf("be executed (1 < b ≤ 10) [def: 10]\n");
  printf("\t-imin i\t\tminimum number of iterations, included (≥ 0) ");
  printf("[def: 0]\n");
  printf("\t-imax i\t\tmaximum number of iterations, included (≥ 0) ");
  printf("[def: 100]\n");
  return (0);
}
