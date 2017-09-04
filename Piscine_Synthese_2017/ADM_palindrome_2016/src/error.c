/*
** error.c for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 12 10:24:17 2017 Jules Spender
** Last update Mon Jun 12 10:46:45 2017 Jules Spender
*/

#include <unistd.h>

void	my_putcherr(char c)
{
  write(2, &c, 1);
}

int	my_putsterr(char *str)
{
  int	i;

  i = 0;
  if (str)
    {
      while (str[i] != '\0')
	my_putcherr(str[i++]);
    }
  return (84);
}
