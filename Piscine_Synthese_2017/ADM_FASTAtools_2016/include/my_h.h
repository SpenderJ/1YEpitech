/*
** my_h.h for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 12 10:21:55 2017 Jules Spender
** Last update Tue Jun 20 12:54:38 2017 Jules Spender
*/

#ifndef _MY_H_H_
# define _MY_H_H_

# ifndef READ_SIZE
#  define READ_SIZE 1024
# endif

# ifndef AMINO_SIZE
#  define AMINO_SIZE 3
# endif

# ifndef NB_BUILTINS
#  define NB_BUILTINS 21
# endif

# ifndef TAB_SIZE
#  define TAB_SIZE 2048
# endif

# ifndef STR_SIZE
#  define STR_SIZE 4096
# endif

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>

char	*amino_a(char*);
char	*amino_c(char*);
char	*amino_d(char*);
char	*amino_e(char*);
char	*amino_f(char*);
char	*amino_g(char*);
char	*amino_h(char*);
char	*amino_i(char*);
char	*amino_k(char*);
char	*amino_l(char*);
char	*amino_m(char*);
char	*amino_n(char*);
char	*amino_p(char*);
char	*amino_q(char*);
char	*amino_r(char*);
char	*amino_s(char*);
char	*amino_t(char*);
char	*amino_v(char*);
char	*amino_w(char*);
char	*amino_x(char*);
char	*amino_y(char*);
char	*get_sequence2(char*, int, int);
char	**epur_tab(char**);
int	solve_5(char**);
int	get_sequence(char*, char**, int, int);
int	check_end(char*);
void	my_swap(char**, int);
char	**my_sort_wordtab(char**, int, int);
int	solve_4(char**, int);
int	finish_4(char*, char**, int);
int	already_exist(char**, char*);
char	*my_partial_copy(char*, int);
char	*fill_tab3(char*, char*);
char	*fill_tab2(char*, char*);
int	fill_tab(char**, char**);
int	tab_len(char**);
int	my_isnum(char*);
void	print_reverse_adn(char*);
void	print_adn_t(char*);
void	print_adn(char*);
int	my_parser(char*, char**, char**);
char	**my_opener();
int	main(int, char**);
void	my_putcherr(char);
int	my_putsterr(char*);
int	help_displayer(char*);
char	*my_strcat(char*, char*);
int	my_strncmp(char*, char*, int);
int	my_strcmp(char*, char*);
void	my_putchar(char);
int	my_putstr(char*);
int	my_strlen(char*);
int	printtab(char**);
char	*my_revstr(char*);
char	*get_next_line(const int);
int	option_1(char**);
int	option_2(char**);
int	option_3(char**);
int	option_4(char**, char*);
int	option_5(char**);
int	option_6(char**, int, int, int);
int	option_7(char**);
char	**make_5(char**);
int	fill_tab_with_file(char**, char**);
void	edit_printtab(char**);
int	resolve_7(char**, char**);
int	file_parser(char**);
int	is_flag(char*);
int	print_7(char*, char*);
char	*get_reverse_adn(char*);
char	**add_reverse(char**);

#endif  /* !_MY_H_H_ */
