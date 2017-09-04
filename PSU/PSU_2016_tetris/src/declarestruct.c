/*
** declarestruct.c for emacs in /home/jules/PSU/PSU_2016_tetris/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Feb 28 17:13:04 2017 Jules Spender
** Last update Sun Mar 19 18:42:45 2017 blaise carnevillier
*/

#include "my_h.h"

void	declarestruct(t_info *info)
{
  int	res;
  int	erreur;

  keypad(stdscr, TRUE);
  res = setupterm(NULL, 0, &erreur);
  info->speed = 1500;
  info->level = 1;
  info->new = 1;
  info->mapsizerow = 20;
  info->mapsizecol = 10;
  info->leftkey = my_strdup(tigetstr("kcub1"));
  info->rightkey = my_strdup(tigetstr("kcuf1"));
  info->turnkey = my_strdup(tigetstr("kcuu1"));
  info->dropkey = my_strdup(tigetstr("kcud1"));
  info->quitkey = my_strdup("q\0");
  info->pausekey = my_strdup(" \0");
  info->hidekey = my_strdup("Yes\0");
  info->score = 0;
}

