/*
** my_realloc.c for  in /home/paul/delivery/PSU/PSU_2016_42sh/src/left_redirection
** 
** Made by Paul Bonoron
** Login   <paul.bonoron@epitech.eu>
** 
** Started on  Fri May 19 13:56:09 2017 Paul Bonoron
** Last update Fri May 19 15:54:04 2017 Paul Bonoron
*/

#include <stdlib.h>
#include <string.h>

char	*my_realloc(char *str, size_t size)
{
  int	i;
  char	*str2;

  i = 0;
  if ((str2 = malloc(sizeof(char) * (strlen(str) + size))) == NULL)
    return (NULL);
  if (str != NULL)
    {
      while (str[i] != 0)
	{
	  str2[i] = str[i];
	  i++;
	}
      str2[i] = '\0';
      free(str);
    }
  return (str2);
}
