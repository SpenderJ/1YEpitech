/*
** display.c for tetris in /home/hecto/PSU_2016_tetris
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Tue Feb 28 12:30:08 2017 blaise carnevillier
** Last update Mon Mar 20 11:00:13 2017 blaise carnevillier
*/

#include <unistd.h>
#include <stdio.h>
#include "my_h.h"

void	first_last(t_info *info, int first)
{
  int i;

  i = 0;
  if (first != 1)
    printw("!>\n");
  printw("\t\t\t<!");
  while (i++ < info->mapsizecol)
    printw("==");
  if (first == 1)
    if (info->hidekey[0] == 'Y')
      printw("!> <!============!>\n\t\t\t<!");
    else
      printw("!>\n\t\t\t <!");
  else
    {
      printw("!>\n\t\t\t  ");
      i = 0;
      while (i++ < info->mapsizecol)
	printw("/\\");
      my_putchar('\n');
    }
}

void	display_map(char **tab, char **next, int last, t_info *info)
{
  int	i;
  int	y;
  int	b;
  
  i = 0;
  b = 0;
  first_last(info, 1);
  while (i < info->mapsizerow)
    {
      y = 0;
      while (tab[i][y + 1] != '\0')
	printw("%c ", tab[i][y++]);
      if (info->hidekey[0] == 'Y')
	b = display_next(i, next, b);
      if (b == 2 && i != last - 1)
	printw("!>\n\t\t\t<!");
      else if (i != last - 1)
	printw("!>\n\t\t\t<!");
      i++;
    }
  first_last(info, 0);

}


int	display_next(int i, char **next, int b)
{
  int	y;

  y = 0;
  if (next[i] != NULL && b != 2)
    {
      b = 1;
      printw("!> <!");
      while (next[i][y] != '\0')
	printw("%c ",next[i][y++]);
      while (y++ <= 5)
	printw("  ",y);
    }
  else if (b == 1)
    {
      printw("!> <!============");
      b = 2;
    }
  return (b);
}    
void	display_tetris()
{
  printw("* * * * * * * * * * * * * * * *\n");
  printw("  *   *       *   *   *   *    \n");
  printw("  *   * *     *   * *   * * * *\n");
  printw("  *   *       *   *  *  *     *\n");
  printw("  *   * * *   *   *  *  * * * *\n");
}

void	display_score(t_info *info)
{
  printw("LEVEL:%d  SCORE:%d\n", info->level, info->score);
}

int	 display(t_info *info, char **tab, char **next)
{
  display_score(info);
  display_map(tab, next, info->mapsizerow, info);
}
