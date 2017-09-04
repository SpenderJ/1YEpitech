/*
** my_print_comb2.c for emacs in /home/jules.spender/CPool_Day03
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct  5 14:06:36 2016 Jules Spender
** Last update Thu Oct  6 22:09:07 2016 Jules Spender
*/

void	my_putchar(char c);
void	my_print_number(int c);

int	my_print_comb2()
{
  int	a;
  int	b;

  a = 0;
  while (a < 99)
    {
      b = 0;
      while (b < 100)
	{
	  if (a != b && b > a)
	  {
	    my_print_number(a);
	    my_putchar(' ');
	    my_print_number(b);
	    if (b != 99 || a != 98)
	      {
		my_putchar(',');
		my_putchar(' ');
	      }
	  }
	  b++;
	}
      a++;
    }
  return (0);
}

void	my_print_number(int z)
{
  int	a;
  int	b;

  a = z % 10;
  b = (z / 10) % 10;
  if (a == 0)
    {
      my_putchar(48 + b);
      my_putchar(48 + a);
    }
  else
    {
      my_putchar(48 + b);
      my_putchar(48 + a);
    }
}
  
