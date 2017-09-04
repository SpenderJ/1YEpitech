/*
** my_strlen.c for emacs in /home/dav.xu/CPool_Day04
** 
** Made by XU David
** Login   <dav.xu@epitech.net>
** 
** Started on  Thu Oct  6 21:37:56 2016 XU David
** Last update Mon Oct 24 12:42:33 2016 david xu
*/

void	my_putchar(char c);

int	my_strlen(char *str)
{
  int	n;

  n = 0;
  while (str[n] != '\0')
    {
      n = n + 1;
    }
  return (n);
}
