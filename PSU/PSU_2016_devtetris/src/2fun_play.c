/*
** 2fun_play.c for tetris in /home/hecto/PSU_2016_devtetris
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Sun Mar 19 14:45:28 2017 blaise carnevillier
** Last update Sun Mar 19 15:51:31 2017 blaise carnevillier
*/

#include "my_h.h"

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
      printw("press 'q' to quit...");
      timeout(0);
      if (getch() == 'q')
	{
	  endwin();
	  exit(0);
	}
    }
}
