/*
** main.c for emacs in /home/jules/PSU/test/test
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sun Mar 19 16:34:39 2017 Jules Spender
** Last update Mon Mar 20 15:32:15 2017 Jules Spender
*/

# include <stdio.h>
# include <ncurses.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <time.h>
# include <string.h>
# include <dirent.h>
# include <unistd.h>
# include <stdlib.h>


int main(int argc, char *argv)
{
  char	input;
  int	res;
  int	erreur;

  printf("PKPKPK\n");
  keypad(stdscr, TRUE);
  newterm(NULL, stdin, stdout);
  while (1)
    {
      input = getch();
      printf("\n\nYou have entered %c", input);
      return (84);
    }
  endwin();
  return (0);
}
