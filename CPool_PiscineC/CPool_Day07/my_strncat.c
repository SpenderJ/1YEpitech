/*
** my_strncat.c for emacs in /home/jules.spender/CPool_Day07
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct 12 17:27:53 2016 Jules Spender
** Last update Wed Oct 12 17:44:41 2016 Jules Spender
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	a;
  int	b;

  b = 0;
  i = 0;
  a = 0;
  while (dest[a] != '\0')
    a = a + 1;
  while (src[i] != '\0' || i <= (nb + 1))
    {
      dest[a + i] = src[i];
      i = i + 1;
    }
  while (dest[b] != '\0')
    {
      my_putchar(dest[b]);
      b = b + 1;
    }
  dest[a + i] = '\0';
  return (dest);
}
