/*
** my_h.h for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 12 10:21:55 2017 Jules Spender
** Last update Wed Jun 14 10:11:39 2017 Jules Spender
*/

#ifndef _MY_H_H_
# define _MY_H_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(int, char**);
void	my_putcherr(char);
int	my_putsterr(char*);
int	my_strcmp(char*, char*);
int	help_displayer(char*);
void	my_putchar(char);
int	my_putstr(char*);
int	sbml_parser(int, char**);
char	**my_opener(char*);
char	**tab_realloc(char**);
char	*get_line(int);
char	*str_realloc(char*);
char	**my_strtowordtab_synthesis(char*);
int	my_strlen(char*);
void	printtab(char**);
char	**str_to_tab(char*);
int	next_return(char*);
int	col_number(char*);
char	*get_word(char*);
int	search_tags(char*);
char	**get_tags(char**);
void	print_tags(char**);
int	epur(char*, char**);
void	my_swap(char**, int);
char	**my_sort_wordtab(char**, int, int);
void	print_ref(char**, char**);
int	fill_categories(char*, char**, int);
int	c_equals(char*);
int	print_compartements(char**, char*);
int	check_compartements(char**, char*);
int	check_product(char**, char*);
int	print_product(char**, char*);
int	check_reac(char**, char*);
int	print_reac(char**, char*);
int	print_species(char**);
int	launch_i(char**, char**);
int	my_strncmp(char*, char*, int);
int	print_screen_c(char**, char*);
char	*get_word_2(char*);
void	clear_tab(char**);
int	print_reac2(char**, char*, char**);
int	print_reac3(char**);
int	print_species2(char**);
int	launch_e(char**, char**);
char	*my_strcat(char*, char*);
int	print_e_reac(char**);
int	print_e_prod(char**);
char	*get_number_eq(char*);
void	print_eq(char**, int, char**);
void	print_arrow(char**);
char	**epur_my_tab(char**);
void	free_tab(char**);

#endif /* !_MY_H_H_ */
