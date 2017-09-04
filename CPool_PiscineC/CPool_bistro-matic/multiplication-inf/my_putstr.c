/*
** my_putstr.c for emacs in /home/dav.xu/CPool_Day04
** 
** Made by XU David
** Login   <dav.xu@epitech.net>
** 
** Started on  Thu Oct  6 19:37:50 2016 XU David
** Last update Thu Nov  3 15:51:26 2016 Jules Spender
*/

void	my_putchar(char c);

int	my_putstr(char *str)
{
  int	n;

  n = 0;
  while (str[n] == '0')
    {
      n += 1;
      if(str[n] == '\0')
	my_putchar('0');
    }
  while (str[n] == '0')
    n += 1;
  while (str[n] != '\0')
    {
      my_putchar(str[n]);
      n = n + 1;
    }
  return (0);
}
