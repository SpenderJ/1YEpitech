/*
** my_print_digits.c for emacs in /home/jules.spender/CPool_Day03
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct  5 11:45:46 2016 Jules Spender
** Last update Thu Oct  6 20:21:37 2016 Jules Spender
*/

void my_putchar(char c);

int my_print_digits()
{
  char	c;

  c = '0';
  while (c != '9')
    {
      c++;
      my_putchar(c);
    }
  return (0);
}
