/*
** calculate_string.c for emacs in /home/Jules.Spender/CPool_evalexpr
** 
** Made by Jules Spender
** Login   <Jules.Spender@epitech.net>
** 
** Started on  Fri Oct 28 08:53:38 2016 Jules Spender
** Last update Fri Oct 28 22:37:53 2016 Jules Spender
*/

#include <stdlib.h>

int	my_strlen(char *str);

int	parcour(char *str);

char	calculate_string(char *str)
{
  char	*sortie;
  char	*pile;
  int	i;
  int	n;

  i = 0;
  n = 0;
  sortie = malloc(sizeof(char) * 1000);
  pile = malloc(sizeof(char) * 1000);
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  sortie[my_strlen(sortie)] = str[i];
	  i = i + 1;
	}
      else if (str[i] == '(')
	{
	  pile[my_strlen(pile)] = str[i];
	  i = i + 1;
	}
      else if (str[i] <= 47 && str[i] >= 33 && str[i] != ')')
	{
	  sortie[my_strlen(sortie)] = ' ';
	  if (pile[0] == '\0')
	    {
	      pile[my_strlen(pile)] = str[i];
	      i = i + 1;
	    }
	  else if (pile[(my_strlen(pile) - 1)] == '(')
	    {
	      pile[my_strlen(pile)] = str[i];
	      i = i + 1;
	    }
	  else if ((str[i] == '%' || str[i] == '*' || str[i] == '/') &&
		   (pile[(my_strlen(pile) - 1)] == '+' || pile[(my_strlen(pile) - 1)] == '-'))
	    {
	      pile[my_strlen(pile)] = str[i];
	      i = i + 1;
	    }
	  else
	    {
	      sortie[my_strlen(sortie)] = pile[(my_strlen(pile) - 1)];
	      sortie[my_strlen(sortie)] = ' ';
	      pile[my_strlen(pile) - 1] = '\0';
	      pile[my_strlen(pile)] = str[i];
	      i = i + 1;
	    }
	}
      else if (str[i] == ')')
	{
	  while (pile[my_strlen(pile) - 1] != '(')
	    {
	      sortie[my_strlen(sortie)] = ' ';
	      sortie[my_strlen(sortie)] = pile[my_strlen(pile) - 1];
	      pile[my_strlen(pile) - 1] = '\0';
	    }
	  pile[my_strlen(pile) - 1] = '\0';
	  i = i + 1;
	}
    }
  n = my_strlen(pile);
  while (n >= 0)
    {
      sortie[my_strlen(sortie)] = pile[n];
      n = n - 1;
      sortie[my_strlen(sortie)] = ' ';
    }
  my_putstr(sortie);
  parcour(sortie);
}
