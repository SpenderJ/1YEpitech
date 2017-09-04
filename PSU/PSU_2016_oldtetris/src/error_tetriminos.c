/*
** error_tetriminos.c for emacs in /home/jules/PSU/PSU_2016_tetris/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Mar 14 12:44:31 2017 Jules Spender
** Last update Sat Mar 18 13:56:15 2017 Jules Spender
*/

#include "my_h.h"

char	***triplearray3(int fd, char *s, int a, char ***tetriminos)
{
  int	longeur;
  int	largeur;
  int	i;

  i = 0;
  longeur = 0;
  largeur = my_getnbr(s);
  while (s[longeur] != ' ')
    longeur = longeur + 1;
  longeur = my_getnbr(&s[longeur + 1]);
  i = longeur;
  if ((tetriminos[a] = malloc(sizeof(char*) * i)) == NULL)
    return (NULL);
  if ((tetriminos[a] = fillarray(my_getnbr(s), i, fd, a)) == NULL)
    return (NULL);
  return (verif_tetris(a, tetriminos, largeur, longeur));
}

char	***verif_tetris(int a, char ***tetriminos, int largeur, int longeur)
{
  int	i;

  i = 0;
  while (tetriminos[a][i] != NULL)
    i = i + 1;
  if (i != longeur)
    {
      free (tetriminos[a]);
      if ((tetriminos[a] = malloc(sizeof(char*) * 10)) == NULL)
	return (NULL);
      tetriminos[a][0] = my_strdup(" Error\0");
      return (tetriminos);
    }
  return (verif_tetris2(a, tetriminos, largeur, longeur));
}

char	***verif_tetris2(int a, char ***tetriminos, int largeur, int longeur)
{
  int	i;
  int	n;
  int	res;
  int	star;

  i = 0;
  n = 0;
  res = 0;
  while (tetriminos[a][i] != NULL)
    {
      star = 0;
      while (tetriminos[a][i][n] != '\0')
	{
	  if (tetriminos[a][i][n] == '*')
	    star = n + 1;
	  n = n + 1;
	}
      if (star >= res)
	res = star;
      n = 0;
      i = i + 1;
    }
  return (verif_tetris3(a, res, largeur, tetriminos));
}

char	***verif_tetris3(int a, int res, int largeur, char ***tetriminos)
{
  if (res != largeur)
    {
      free (tetriminos[a]);
      if ((tetriminos[a] = malloc(sizeof(char*) * 10)) == NULL)
	return (NULL);
      tetriminos[a][0] = my_strdup(" Error\0");
    }
  return (tetriminos);
}

int	verif_string(char *s, int i)
{
  if (s == NULL)
    return (-1);
  while (s[i] != '\0')
    {
      if ((s[i] > '9' || s[i] < '0') && s[i] != ' ')
	return (-1);
      i = i + 1;
    }
  i = 0;
  if (my_getnbr(s) <= 0)
    return (-1);
  while (s[i] != ' ' && s[i] != '\0')
    i = i + 1;
  i = i + 1;
  if (my_getnbr(&s[i]) <= 0)
    return (-1);
  while (s[i] != ' ' && s[i] != '\0')
    i = i + 1;
  if (my_getnbr(&s[++i]) <= 0)
    return (-1);
  while (s[i] >= '0' && s[i] <= '9')
    i = i + 1;
  if (s[i] != '\0')
    return (-1);
  return (0);
}
