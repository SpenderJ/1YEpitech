/*
** my_putstr.c for emacs in /home/dav.xu/CPool_Day04
** 
** Made by XU David
** Login   <dav.xu@epitech.net>
** 
** Started on  Thu Oct  6 19:37:50 2016 XU David
** Last update Tue Nov  1 09:53:08 2016 david xu
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
      n += 1;;
    }
  return (0);
}
