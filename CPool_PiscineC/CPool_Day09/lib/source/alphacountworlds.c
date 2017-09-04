/*
** alphacountword.c for emacs in /home/jules.spender/CPool_Day09/task03/lib/my
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Fri Oct 14 18:20:47 2016 Jules Spender
** Last update Fri Oct 14 19:20:32 2016 Jules Spender
*/

int	alphacountword(char *str)
{
  int	fn;
  int	count;

  fn = 0;
  while (str[fn] != '\0')
    {
      while ((str[fn] >= 48 && str[fn] <= 57) ||
	     (str[fn] >= 65 && str[fn] <= 90) ||
	     (str[fn] >= 97 && str[fn] <= 122))
	fn = fn + 1;
      count = fn;
      while ((str[count] < 48 && str[count] > 57) ||
	     (str[count] < 65 && str[count] > 90) ||
	     (str[count] < 97 && str[count] > 122))
	count = count + 1;
    }
  return (fn);
}
