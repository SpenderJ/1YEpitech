/*
** my_strlen.c for emacs in /home/jules.spender/CPool_Day07
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct 12 12:13:12 2016 Jules Spender
** Last update Fri Oct 14 08:20:47 2016 Jules Spender
*/

void	my_putchar();

int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    a = a + 1;
  return (a);
}
