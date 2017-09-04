/*
** my_isneg.c for emacs in /home/jules.spender/CPool_Day03
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct  5 12:04:42 2016 Jules Spender
** Last update Thu Oct  6 20:47:32 2016 Jules Spender
*/

void	my_putchar(char c);

int	my_isneg(int n)
{
  if (0 <= n)
      my_putchar('P');
  else
    {
      my_putchar('N');
    }
  return (0);
}
    
