/*
** my_show_wordtab.c for emacs in /home/jules.spender/CPool_Day08/task03
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct 12 15:28:32 2016 Jules Spender
** Last update Thu Oct 13 16:29:13 2016 Jules Spender
*/

#include <unistd.h>

void	my_put_char(char c)
{
  write(1, &c, 1);
}

int	my_str_len(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}

int	my_put_str(char *str)
{
  int	len;
  int	i;

  i = 0;
  len = my_str_len(str);
  while (i < len)
    {
      my_put_char(str[i]);
      i = i + 1;
    }
}

int	my_show_wordtab(char **tab)
{
  int	a;

  a = 0;
  while (tab[a] != '\0')
    {
      my_put_str(tab[a]);
      my_put_char('\n');
      a = a + 1;
    }
  return (0);
}
