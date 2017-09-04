/*
** my_print_alpha.c for my_print_alpha.c in /home/jules.spender
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct  5 07:58:20 2016 Jules Spender
** Last update Thu Oct  6 20:22:20 2016 Jules Spender
*/

void	my_putchar(char c);

int	my_print_alpha()
{
  char	c;

  c = 'a';
    while (c <= 'z')
      {
	my_putchar (c);
	c++;
      }
  return (0);
}
