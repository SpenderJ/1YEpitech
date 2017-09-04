/*
** my.h for emacs in /home/jules.spender/CPool_Day09/include
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Fri Oct 14 08:23:06 2016 Jules Spender
** Last update Fri Oct 14 19:08:11 2016 Jules Spender
*/

#ifndef MY.H
#define MY.H

void	my_putchar(char c);

int	my_isneg(int nb);

int	my_put_nbr(int nb);

int	my_swap(int *a, int *b);

int	my_putstr(char *str);

int	my_strlen(char *str);

int	my_getnbr(char *str);

void	my_sort_int_tab(int *tab, int size);

int	my_power_rec(int nb, int power);

int	my_square_root(int nb);

int	my_is_prime(int nombre);

int	my_find_prime_sup(int nb);

char	*my_strcpy(char *dest, char *src);

char	*my_strncpy(char *dest, char *src, int n);

char	*my_revstr(char *str);

char	*my_strstr(char *str, char *to_find);

int	my_strcmp(char *s1, char *s2);

int	my_strncmp(char *s1, char *s2);

char	*my_strupcase(char *str);

char	*my_strlowcase(char *str);

char	*my_strcapitalize(char *str);

int	my_str_isalpha(char *str);

int	my_str_isnum(char *str);

int	my_str_islower(char *str);

int	my_str_isupper(char *str);

int	my_str_isprintable(char *str);

int	my_showstr(char *str);

int	my_showmem(char *str, int size);

char	*my_strcat(char *dest, char *src);

char	*my_strncat(char *dest, char *src, int nb);

char	*my_strdup(char *src);

char	**my_str_to_wordtab(char *str);

int	alphacountword(char *str);

char	countnoword(char *str);

#endif
