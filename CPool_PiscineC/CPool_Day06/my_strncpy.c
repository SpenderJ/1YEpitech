/*
** my_strncpy.c for emacs in /home/jules.spender/CPool_Day06
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Tue Oct 11 08:50:34 2016 Jules Spender
** Last update Tue Oct 11 09:03:37 2016 Jules Spender
*/

char *my_strncpy(char *dest, char *src, int n)
{
  int	a;

  a = 0;
  while (a < n && src[a] != '\0')
    {
      dest[a] = src[a];
      a = a + 1;
    }
  return (*dest);
}
