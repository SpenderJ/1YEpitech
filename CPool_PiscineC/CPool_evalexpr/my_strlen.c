/*
** my_strlen.c for emacs in /home/jules.spender/CPool_Day04
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Thu Oct  6 16:36:32 2016 Jules Spender
** Last update Thu Oct  6 20:18:30 2016 Jules Spender
*/

void	my_putchar();

int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      a++;
    }
  return (a);
}
