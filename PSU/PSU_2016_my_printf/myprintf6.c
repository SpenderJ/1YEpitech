/*
** myprintf6.c for emacs in /home/jules/PSU_2016_my_printf
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 17 14:42:56 2016 Jules Spender
** Last update Sat Nov 19 15:28:00 2016 Jules Spender
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
int     my_printf7(va_list argp, char *list, int a, int n);

int     my_printf6(va_list argp, char *list, int a, int n)
{
  char          *study;

  study = malloc(sizeof(char) * my_strlen(list));
  if (list[a] == 'p')
    {
      study = tohexamin(va_arg(argp, int));
      while (study[n] != '\0' && ((study[n] >= '0' && study[n] <= '9')||\
				  (study[n] >= 'a' && study[n] <= 'f')))
	n = n + 1;
      if (study[0] == '\0')
	{
	  write(1, "(nil)", 5);
	  return (1);
	}
      my_putstr("0x");
      my_putstr(study);
    }
  printf("%p", 111);
  my_printf7(argp, list, a, 0);
}
