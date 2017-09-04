/*
** my_print_comb.c for emacs in /home/jules.spender/CPool_Day03
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct  5 13:20:22 2016 Jules Spender
** Last update Thu Oct  6 20:23:00 2016 Jules Spender
*/

void	my_putchar(char c);
void	my_second(char premier, char second, char troisieme);

int	my_print_comb()
{
  char	premier;
  char	second;
  char	troisieme;

  premier = '0';
  while (premier <= '9')
    {
      second = '0';
      while (second <= '9')
	{
	  troisieme = '0';
	  while (troisieme <= '9')
	    {
	      if (premier < second && second < troisieme)
		my_second(premier, second, troisieme);
	      troisieme++;
	    }
	  second++;
	}
      premier++;
    }
  return (0);
}

void	my_second(char premier, char second, char troisieme)

{
  my_putchar(premier);
  my_putchar(second);
  my_putchar(troisieme);
  if (premier != '7' || second != '8' || troisieme != '9')
    {
      my_putchar(',');
      my_putchar(' ');
    }
}
      
