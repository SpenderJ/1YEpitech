/*
** my_h.h for emacs in /home/jules/PSU/PSU_2016_minishell1
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Jan 19 09:50:06 2017 Jules Spender
** Last update Sun Jan 22 22:39:29 2017 Jules Spender
*/

#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <stdio.h>

#ifndef MY_H_H_
#define MY_H_H_

typedef struct	s_global
{
  char		**array;
  char		**arg;
  char		**arg2;
  char		buffer[4242];
  pid_t		pid;
  int		fd;
  char		*str_cat;
  int		stat;

}		t_first;

void		my_putchar(char c);
int		my_putstr(char *str);
int		my_strlen(char *str);
char		**my_env_finder(char **env);
char		**my_str_to_wordtab(char *str, char car);
int		cd(t_first my_controler);
void		my_exit(t_first my_controler);
int		my_strstr(char *w1, char *w2);
int		core(t_first my_controler, char **env);

#endif
