/*
** my_putstr.c for emacs in /home/jules.spender/CPool_Day04
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Thu Oct  6 12:36:43 2016 Jules Spender
** Last update Thu Oct  6 20:18:11 2016 Jules Spender
*/

void	my_putchar();

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

      
