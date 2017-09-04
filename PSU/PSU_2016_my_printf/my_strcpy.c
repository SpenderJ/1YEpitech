/*
** my_strcpy.c for emacs in /home/jules.spender/CPool_Day06
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Tue Oct 11 07:56:21 2016 Jules Spender
** Last update Fri Nov 18 10:35:22 2016 Jules Spender
*/

char	*my_strcpy(char *dest, char *src)
{
  int	a;
  
  a = 0;
  while (src[a] != '\0')
    {
      dest[a] = src[a];
      a = a + 1;
    }
  return (dest);
}

