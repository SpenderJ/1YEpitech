
/*
** my_strstr.c for emacs in /home/jules.spender/CPool_Day06
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Tue Oct 11 10:21:50 2016 Jules Spender
** Last update Tue Oct 11 15:35:55 2016 Jules Spender
*/

int	my_strlen(char *to_find)
{
  int	a;

  a = 0;
  while (to_find[a] != '\0')
    a = a + 1;
  return (a);
}

char	*mystrstr(char *str, char *to_find)
{
  int	a;
  int	b;
  int	c;

  b = 0;
  c = 0;
  a = my_strlen(to_find);
  while (str[b] != "\0" && b <= (a + 1) && c <= (a + 1))
    {
      if (str[b] == to_find[c] && c <= (a + 1))
	{
	  while (str[b] == to_find[c] && c != a)
	    {
	      b = b + 1;
	      c = c + 1;
	      if (str[b] == to_find[c] && c == a)
		{
		  while (a != 0)
		    {
		      my_putchar(b)
		   
		    }
		  return (&str[b - a]);
		}
	    }
	}
      b = b + 1;
      c = 0;
    }
  return ("NULL");
}
