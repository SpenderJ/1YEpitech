/*
** countnoword.c for emacs in /home/jules.spender/CPool_Day09/task03/lib/my
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Fri Oct 14 18:25:16 2016 Jules Spender
** Last update Fri Oct 14 19:20:50 2016 Jules Spender
*/

char	countnoword(char *str)
{
  int	pn;
  int	count2;

  pn = 0;
  while (str[pn] != '\0')
    {
      while ((str[pn] >= 48 && str[pn] <= 57) ||
	     (str[pn] >= 65 && str[pn] <= 90) ||
	     (str[pn] >= 97 && str[pn] <= 122))
	pn = pn + 1;
      count2 = pn;
      while ((str[count2] < 48 && str[count2] > 57) ||
	     (str[count2] < 65 && str[count2] > 90) ||
	     (str[count2] < 97 && str[count2] > 122))
	count2 = count2 + 1;
    }
  return (count2);
}
