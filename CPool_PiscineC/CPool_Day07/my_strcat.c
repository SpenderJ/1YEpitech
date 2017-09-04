/*
** my_strcat.c for emacs in /home/jules.spender/CPool_Day07
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct 12 16:52:29 2016 Jules Spender
** Last update Tue Mar  7 14:15:04 2017 Jules Spender
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	a;
  int	b;

  b = 0;
  i = 0;
  a = 0;
  while (dest[a] != '\0')
      a = a + 1;
  while (src[i] != '\0')
    {
      dest[a + i] = src[i];
      i = i + 1;
    }
  while (dest[b] != '\0')
    b = b + 1;
  dest[a + i] = '\0';
  return (dest);
}
