/*
** my.h for emacs in /home/jules/CPE/CPE_2016_BSQ
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Wed Dec 14 14:04:12 2016 Jules Spender
** Last update Thu Dec 15 21:41:31 2016 Jules Spender
*/

#ifndef		MY_H
#define		MY_H

int	my_strlen(char *str);
int	my_atoi(char *str);
char	*my_map_to_str(char **argv, int i, int a);
int     vertical_size(char *str);
int	horizontal_size(char *str);
int     my_error(int argc, char **argv);
int     my_square(char *str, int column_number, int place_number);
char    *only_map(char *str);
char    **str_to_array(char *str, int vertical, int horizontal);
int     biggest_square(char **array, int vertical, int horizontal, int error, int result);
int	my_printer(char **array, int Square_Side, int vertical, int horizontal, int error);
void	my_putchar(char c);

#endif
