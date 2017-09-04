/*
** my_print_revalpha.c for emacs in /home/jules.spender/CPool_Day03
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct  5 11:40:13 2016 Jules Spender
** Last update Thu Oct  6 20:30:17 2016 Jules Spender
*/

void	my_putchar(char c);

int	my_print_revalpha()
{
  char	c;

  c = 'z';
  while (c != 'a')
    {
      my_putchar(c);
      c--;
    }
  my_putchar('a');
  return (0);
}
