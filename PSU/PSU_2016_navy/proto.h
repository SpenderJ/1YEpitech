/*
** proto.h for emacs in /home/hecto/navy
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Mon Jan 30 12:59:57 2017 blaise carnevillier
** Last update Tue Jan 31 16:03:56 2017 blaise carnevillier
*/

#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>

#ifndef NAVY_H
#define NAVY_H

int	network(int);

int	play(char**, char**);

int	is_in_coord(int, int, char**);

int	my_printf(char*, ...);

int	print_help();

char	*get_next_line(int);

void	print_tab(char**, int);

#endif
