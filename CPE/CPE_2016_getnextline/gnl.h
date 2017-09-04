/*
** gnl.h for emacs in /home/jules/CPE/CPE_2016_matchstick
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sun Feb 26 16:07:00 2017 Jules Spender
** Last update Sun Feb 26 16:15:10 2017 Jules Spender
*/

#ifndef GNL_H
#define GNL_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 4096

char	*get_next_line(const int fd);
char    get_char(const int fd);
char    *my_realloc(char *str, int size);

#endif
#endif
