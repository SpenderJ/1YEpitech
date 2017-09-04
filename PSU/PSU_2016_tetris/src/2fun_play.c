/*
** 2fun_play.c for tetris in /home/hecto/PSU_2016_devtetris
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Sun Mar 19 14:45:28 2017 blaise carnevillier
** Last update Tue Mar 21 10:12:57 2017 blaise carnevillier
*/

#include "my_h.h"

char    **clear_t_tab(t_info *info)
{
  char  **t_tab;
  int   i;
  int   y;

  if (!(t_tab = malloc(sizeof(char*) * info->mapsizerow)))
    exit(84);
  i = 0;
  while (i < info->mapsizerow)
    {
      y = 0;
      if (!(t_tab[i] = malloc(sizeof(char) * info->mapsizecol)))
	exit(84);
      while (y < info->mapsizecol)
	t_tab[i][y++] = '.';
      i++;
    }
  return (t_tab);
}

void	win_size(t_info *info)
{
  while ((LINES - 1 <= info->mapsizerow + 4) ||	\
	 (COLS - 1 <= info ->mapsizecol))
    {
      clear();
      move((LINES - 1) / 2, (COLS - 1) / 2 - 8);
      printw("windows is too small...");
      move((LINES - 1) / 2 + 1, (COLS - 1) / 2 - 8);
      printw("press 'q' to quit:");
      if (getch() == 'q')
	{
	  endwin();
	  exit(0);
	}
    }
  clear;
}

int	end_game(t_info *info)
{
  while (1)
    {
      clear();
      move((LINES - 1) / 2 - 1, (COLS - 1) / 2 - 8);
      printw("END OF THE GAME:");
      move((LINES - 1) / 2 , (COLS - 1) / 2 - 3);
      printw("Level : %d", info->level);
      move((LINES - 1) / 2 + 1, (COLS - 1) / 2 - 3);
      printw("score : %d", info->score);
      move(((LINES - 1) / 4) * 3 , (COLS - 1) / 2 - 10);
      printw("press 'e' to quit...");
      timeout(0);
      if (getch() == 'e')
	{
	  endwin();
	  exit(0);
	}
    }
}
