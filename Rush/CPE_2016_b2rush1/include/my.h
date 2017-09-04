/*
** my.h for my_archive in /home/sacha.riperto/B-CPE/CPE_2016_b2rush1_off/src_my_archive
** 
** Made by Sacha Riperto
** Login   <sacha.riperto@epitech.net>
** 
** Started on  Sat Mar  4 10:55:05 2017 Sacha Riperto
** Last update Sun Mar  5 12:05:53 2017 Sacha Riperto
*/

#ifndef MY_H_
# define MY_H_

# ifndef READ_SIZE
#  define READ_SIZE 1024
# endif

# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <dirent.h>
# include <tar.h>

int	puterr(const char *msg);
int	is_dir(int fd_arc, char *file);
char	*get_name(char *name);
char	*get_next_line(const int fd);

#endif /* !MY_H_ */
