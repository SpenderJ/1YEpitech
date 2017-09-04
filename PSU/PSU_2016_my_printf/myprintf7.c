/*
** myprintf7.c for emacs in /home/jules/PSU_2016_my_printf
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 17 14:41:41 2016 Jules Spender
** Last update Mon Nov 28 17:03:05 2016 Jules Spender
*/

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

void    zeroboi(char b);
void    my_putchar(char c);
int     my_putstr(char *str);
int     my_put_nbr(int nbr);
int     my_strlen(char *str);
char    *my_revstr(char *str);
char    *tooctal(int nbr);
char    *tobinaire(int nbr);
char    *tohexa(int nbr);
char    *tohexamin(int nbr);
int     my_printf8(va_list argp, char *list, int a, int n);

int     my_printf7(va_list argp, char *list, int a, int n)
{
  char	*study;
  char  b;

  study = malloc(sizeof(char) * my_strlen(list));
  if(list[a] == 's')
    my_putstr(va_arg(argp, char*));
  else if(list[a] == 'S')
    {
      study = va_arg(argp, char*);
      while (study[n] != '\0')
	{
	  if (study[n] >= 32 && study[n] < 127)
	    my_putchar(study[n]);
	  else
	    {
	      my_putchar('\\');
	      zeroboi(tooctal(study[n]));
	      my_putstr(tooctal(study[n]));
	    }
	  n = n + 1;
	}
    }
  my_printf8(argp, list, a, 0);
}
