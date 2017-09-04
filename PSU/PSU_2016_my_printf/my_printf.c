/*
** my_printf.c for emacs in /home/jules/PSU_2016_my_printf
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Mon Nov 14 15:45:05 2016 Jules Spender
** Last update Fri Nov 18 14:32:01 2016 Jules Spender
*/

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int	my_printf2(va_list argp, char *list, int a);
int	my_printf3(va_list argp, char *list, int a, int n);
int	my_printf4(va_list argp, char *list, int a, int n);
int	my_printf5(va_list argp, char *list, int a, int n);
int	my_printf6(va_list argp, char *list, int a, int n);
int     my_printf7(va_list argp, char *list, int a, int n);
int	my_printf8(va_list argp, char *list, int a, int n);
void	zeroboi(char b);
void	my_putchar(char c);
int	my_putstr(char *str);
int	my_put_nbr(int nbr);
int	my_strlen(char *str);
char	*my_revstr(char *str);
char	*tooctal(int nbr);
char	*tobinaire(int nbr);
char	*tohexa(int nbr);
char	*tohexamin(int nbr);
char	*my_strcpy(char *dest, char *src);

int	my_printf(char *list, ...)
{
  va_list	argp;
  int		n;
  int		a;
  
  n = 1;
  a = 0;
  va_start(argp, list);
  while (list[a] != '\0')
    {
      if (list[a] == '%')
	{
	  a = a + 1;
	  my_printf2(argp, list, a);
	}
      else
	my_putchar(list[a]);
      a = a + 1;
    }
  return (0);
}

int	my_printf2(va_list argp, char *list, int a)
{
  int		n;
  char		*study;

  n = 0;
  study  = malloc(sizeof(char) * my_strlen(list));
  if (list[a] == '%')
    my_putchar('%');
  else if (list[a] == 'c')
    my_putchar(va_arg(argp, int));
  else if (list[a] == 'd' || list[a] == 'i')
    my_put_nbr(va_arg(argp, int));
  else if (list[a] == 'o')
    {
      study = tooctal(va_arg(argp, int));
      while (study[n] != '\0' && study[n] >= '0' && study[n] <= '9')
	n = n + 1;
      if (n == my_strlen(study))
	my_putstr(study);
      else
	{
	  write(1, "Error 404: Not an int in %o", 27);
	  return (84);
	}
    }
  my_printf3(argp, list, a, 0);
}

int	my_printf3(va_list argp, char *list, int a, int n)
{
  char		*study;
  
  study = malloc(sizeof(char) * my_strlen(list));
  if (list[a] == 'b')
    {
      study = tobinaire(va_arg(argp, int));
      while (study[n] != '\0' && study[n] >= '0' && study[n] <= '1')
	n = n + 1;
      if (n == my_strlen(study))
	my_putstr(study);
      else
	{
	  write(1, "Error 404: Wrong Argument", 27);
	  return (84);
	}
    }
  my_printf4(argp, list, a, 0);
}

int	my_printf4(va_list argp, char *list, int a, int n)
{
  char          *study;

  study  = malloc(sizeof(char) * my_strlen(list));
  if (list[a] == '@')
    my_putchar('@');
  if (list[a] == 'X')
    {
      study = tohexa(va_arg(argp, int));
      my_putstr(study);
    }
  my_printf5(argp, list, a, 0);
}
  
int	my_printf5(va_list argp, char *list, int a, int n)
{
  char		*study;

  study = malloc(sizeof(char) * my_strlen(list));
  if (list[a] == 'x')
    {
      study = tohexamin(va_arg(argp, int));
      my_putstr(study);
    }
  if (list[a] == '\0')
    return (0);
  my_printf6(argp, list, a, 0);
  if (list[a] == ' ')
    a = a + 1;
}
