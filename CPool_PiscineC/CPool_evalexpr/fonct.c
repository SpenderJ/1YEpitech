/*
** fonct.c for emacs in /home/hecto/CPool_evalxpr
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Fri Oct 28 08:09:20 2016 blaise carnevillier
** Last update Fri Oct 28 21:49:26 2016 Jules Spender
*/

#include<stdlib.h>

int	my_str2len(int *str);

int	my_intlen(int i)
{
  int	res;

  res = 1;
  while (i > 0)
    {
      res++;
      i = i / 10;
    }
  return (res);
}

int	cut(char *str, int d)
{
  int	res;

  res = 0;
  while (str[d] != ' ' && str[d] != '\0')
    {
      res = res * 10 + str[d] - 48;
      d += 1;
    }
  return (res);
}

int	do_op(char c, int *pile)
{
  int	op1;
  int	op2;

  op1 = pile[my_str2len(pile) - 1];
  pile[my_str2len(pile) - 1] = '\0';
  op2 = pile[my_str2len(pile) - 1];
  pile[my_str2len(pile) - 1] = '\0';
  if (c == '+')
    return (op1 + op2);
  if (c == '-')
    return (op2 - op1);
  if (c == '*')
    return (op1 * op2);
  if (c == '/')
    return (op2 / op1);
  if (c == '%')
    return (op2 % op1);
}

int	my_str2len(int *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}

int	parcour(char *str)
{
  int	*pile;
  int	op1;
  int	i;
  int	res;

  i = 0;
  pile = malloc(sizeof(char)* 2 *my_str2len(str));
  while (str[i] != '\0')
    {
      if (str[i] == '+' || str[i] == '-' || \
	  str[i] == '%' || str[i] == '*' || str[i] == '/')
	{
	  res = do_op(str[i], pile);
	  pile[my_str2len(pile)] = res;
	  i += 1;
	}
      else if (str[i] >=48 && str[i] <= 57)
	{
	  op1 = cut(str, i);
	  i += my_intlen(op1);
	  pile[my_str2len(pile)] = op1; 
	}
      else
	i++;
    }
  my_put_nbr(res);
  return (0);
}
