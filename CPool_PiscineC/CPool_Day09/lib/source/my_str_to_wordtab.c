/*
** my_str_to_wordtab.c for emacs in /home/jules.spender/CPool_Day08
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Thu Oct 13 17:06:03 2016 Jules Spender
** Last update Fri Oct 14 19:18:25 2016 Jules Spender
*/

#include <stdlib.h>

char	countworlds(char *str);
char	countnoword(char *str);
int	alphacountworlds(char *str);


char	**my_str_to_wordtab(char *str)
{
  int	nbremots;
  char	**dest;
  int	branches;
  int	lettres;
  int	point;
  int	compteur2;
  int	nbre;

  branches = 0;
  countworlds(str);
  nbremots = countworlds(str);
  point = countnoword(str);
  compteur2 = 0;
  nbre = 0;
  dest = malloc(nbremots * sizeof(char*));
  while (branches <= nbremots)
    {
      alphacountworlds(str);
      lettres = alphacountworlds(str);
      dest = malloc(lettres * sizeof(char*));
      while (branches != lettres)
	{
	  dest[nbre][branches];
	  branches = branches + 1;
	}
    }
      nbre = nbre + 1;
}

char	countworlds(char *str)
{
  int	mots;
  int	c;
  int	z;

  z = 0;
  mots = 0;
  while (str[z] != '\0')
    {
      while (!(str[z] >= 48 && str[z] <= 57) ||
	     (str[z] >= 65 && str[z] <= 90) ||
	     (str[z] >= 97 && str[z] <= 122))
	{
	  c = 1;
	  z = z + 1;
	}
      if (c == 1)
	{
	  mots = mots + 1;
	  c = 0;
	}
      z = z + 1;
    }
  return (mots);
}
    
int	alphacountworlds(char *str)
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
