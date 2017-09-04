/*
** my_strcpy.c for emacs in /home/jules.spender/CPool_Day06
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Tue Oct 11 07:56:21 2016 Jules Spender
** Last update Tue Feb 28 14:05:13 2017 Jules Spender
*/

int	my_strcpy(char *dest, char *src)
{
  int	a;
  
  a = 0;
  while (src[a] != '\0')
    {
      if (dest[a] == src[a])
	a = a + 1;
      else
	return (-1);
    }
  if (dest[a] == '\0')
    return (0);
  else
    return (-1);
}
