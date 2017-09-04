/*
** myprintf8.c for emacs in /home/jules/PSU_2016_my_printf
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 17 14:40:44 2016 Jules Spender
** Last update Thu Nov 17 19:04:15 2016 Jules Spender
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

int     my_printf8(va_list argp, char *list, int a, int n)
{
  char          *study;

  study = malloc(sizeof(char) * my_strlen(list));
  if (list[a] != 's' && list[a] != 'S' && list[a] != 'u' && list[a] != 'o'
            && list[a] != 'd' && list[a] != 'i' && list[a] != 'x' && list[a] != 'X'
            && list[a] != 'c' && list[a] != 'C' && list[a] != 'c' && list[a] != '%'
      && list[a] != 'b' && list[a] != 'p')
    {
      my_putchar('%');
      my_putchar(list[a]);
    }
}
