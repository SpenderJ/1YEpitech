/*
** my_evil_str.c for emacs in /home/jules.spender/CPool_Day04
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Thu Oct  6 18:43:02 2016 Jules Spender
** Last update Fri Oct  7 09:58:38 2016 Jules Spender
*/

void	my_putchar();

char	*my_evil_str(char *str)
{
  int	a;
  int	b;
  int	c;

  a = 0;
  b = 0;
  while (str[a] != '\0')
    {
      a++;
    }
  while (a != b && b >= 0)
    {
      c = str[a];
      str[a] = str[b];
      str[b] = c;
      a--;
      b++;
    }
  return (str);
}
