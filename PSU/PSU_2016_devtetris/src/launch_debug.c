/*
** launch_debug.c for emacs in /home/jules/PSU/PSU_2016_tetris/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Fri Mar  3 15:06:29 2017 Jules Spender
** Last update Thu Mar 16 17:27:46 2017 Jules Spender
*/

#include "my_h.h"

extern char **environ;

char	***launch_debug(t_info *info)
{
  char	***tetriminos;

  my_putstr("*** DEBUG MODE ***\nKey Left : ");
  my_putstrspecial(info->leftkey);
  my_putstr("\nKey Right : ");
  my_putstrspecial(info->rightkey);
  my_putstr("\nKey Turn : ");
  my_putstrspecial(info->turnkey);
  my_putstr("\nKey Drop : ");
  my_putstrspecial(info->dropkey);
  my_putstr("\nKey Quit : ");
  my_putstrspecial(info->quitkey);
  my_putstr("\nKey Pause : ");
  my_putstrspecial(info->pausekey);
  my_putstr("\nNext : ");
  my_putstrspecial(info->hidekey);
  my_putstr("\nLevel : ");
  my_put_nbr(info->level);
  my_putstr("\nSize : ");
  my_put_nbr(info->mapsizerow);
  my_putstr("*");
  my_printf("%d\n", info->mapsizecol);
  tetriminos = print_tetriminos("tetriminos");
  my_putstr("Press any key to start Tetris\n");
  return (tetriminos);
}

char	***print_tetriminos(char *name)
{
  int	i;
  DIR	*dir2;
  struct dirent	*dirent2;
  char	**filename2;
  char	***tetriminos;

  if ((filename2 = malloc(sizeof(char*) * 100)) == NULL)
    return (NULL);
  i = 0;
  if ((dir2 = opendir(name)) == NULL)
    return (NULL);
  while ((dirent2 = readdir(dir2)))
    {
      if (dirent2->d_name[0] != '.' )
	{
	  filename2[i] = my_strdup(dirent2->d_name);
	  i = i + 1;
	}
    }
  my_printf("Tetriminos :  %d\n", i);
  filename2[i] = NULL;
  filename2 = my_sort_wordtab(filename2, 0, 0);
  tetriminos = declarechar("tetriminos");
  chdir("../PSU/PSU_2016_tetris/");
  return (tetriminos);
}

void	my_putstrspecial(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ' ')
	my_putstr("(space)");
      else if (str[i] == 27)
	my_putstr("^[");
      else
	my_putchar(str[i]);
      i = i + 1;
    }
}
