/*
** palindrome.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_palindrome_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Thu Jun 15 10:33:49 2017 Jules Spender
** Last update Mon Jun 19 12:08:06 2017 Jules Spender
*/

#include "my_h.h"

int	palindrome(int argc, char **argv)
{
  if (argv[1] != NULL && my_strcmp(argv[1], "-p") == 0)
    return (launch_p(argc, argv, 0, -1));
  else if (argv[1] != NULL && my_strcmp(argv[1], "-n") == 0)
    return (launch_n(argc, argv, 0, -1));
  else
    return (my_putsterr("invalid argument\n"));
}

int	launch_p(int argc, char **av, int r, int c)
{
  int	b;
  int	imi;
  int	ima;
  char	*s;
  int	i;

  if ((ima = 100) == 100 && (imi = 0) == 0 && (b = 10) == 10)
    i = -1;
  s = malloc(sizeof(char) * (strlen(av[2]) * strlen(av[2])));
  if ((check_flags(av, &b, &imi, &ima)) == 84 || imi > ima ||\
      my_strcmp(tobase(av[2], b), my_revstr(tobase(av[2], b))) != 0)
    return (my_putsterr("invalid argument\n"));
  while (++i <= atoi(av[2]))
    {
      sprintf(s, "%d", i);
      while ((s = tobase(s, b)) && ++c <= ima && tod(s, b) <= atoi(av[2]))
	{
	  if (my_strcmp(s, tobase(av[2], b)) == 0 && c >= imi && c <= ima && (r = 1))
	    printf("%d leads to %s in %d iteration(s) in base %d\n", i, av[2], c, b);
	  sprintf(s, "%d", (tod(s, b) + tod(my_revstr(s), b)));
	}
      c = -1;
    }
  return (check_r(r));
}

int	check_r(int r)
{
  if (r != 1)
    printf("no solution\n");
  return (0);
}

int	launch_n(int argc, char **argv, int res, int c)
{
  int	base;
  int	imin;
  int	imax;
  char	*str;
  int	i;

  if ((imax = 100) == 100 && (imin = 0) == 0 && (base = 10) == 10)
    i = -1;
  if ((check_flags(argv, &base, &imin, &imax)) == 84 || imin > imax)
    return (my_putsterr("invalid argument\n"));
  str = malloc(sizeof(char) * strlen(argv[2]));
  sprintf(str, "%d", atoi(argv[2]));
  while (++c <= imax)
    {
      str = tobase(str, base);
      if (my_strcmp(str, my_revstr(str)) == 0  && c >= imin &&\
	  c <= imax && (res = 1))
	{
	  printf("%s leads to %d in ", argv[2], tod(str, base));
	  printf("%d iteration(s) in base %d\n", c, base);
	  return (0);
	}
      sprintf(str, "%d", (tod(str, base) + tod(my_revstr(str), base)));
    }
  return (check_r(res));
}

int	check_flags(char **argv, int *base, int *imin, int *imax)
{
  int	f1;
  int	f2;
  int	f3;
  int	i;

  i = 2;
  if ((f1 = 0) == 0 && ((f2 = f3 = 0)) == 0 && my_isnum(argv[i++]) != 0)
    return (84);
  while (argv[i] != NULL)
    {
      if (my_strcmp(argv[i], "-b") != 0 && my_strcmp(argv[i], "-imin") != 0\
	  && my_strcmp(argv[i], "-imax") != 0)
	return (84);
      if (my_strcmp(argv[i], "-b") == 0)
	if (++f1 > 1 || check_b(argv[i + 1], base, imin, imax) != 0)
	  return (84);
      if (my_strcmp(argv[i], "-imin") == 0)
	if (++f2 > 1 || check_imin(argv[i + 1], base, imin, imax) != 0)
	  return (84);
      if (my_strcmp(argv[i], "-imax") == 0)
	if (++f3 > 1 || check_imax(argv[i + 1], base, imin, imax) != 0)
	  return (84);
      i = i + 2;
    }
  return (0);
}
