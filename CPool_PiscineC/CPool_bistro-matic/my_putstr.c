/*
** my_putstr.c for emacs in /home/jules.spender/CPool_Day04
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Thu Oct  6 12:36:43 2016 Jules Spender
** Last update Fri Oct 28 12:47:09 2016 Jules Spender
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	toerau;

  toerau = 0;
  while (str[toerau])
    {
      my_putchar(str[toerau]);
      toerau++;
    }
  return (0);
}

      
