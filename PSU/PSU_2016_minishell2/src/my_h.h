/*
** my_h.h for emacs in /home/jules/PSU/PSU_2016_minishell2
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Mar 21 10:39:05 2017 Jules Spender
** Last update Sun Apr  9 22:09:25 2017 Jules Spender
*/

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include "gnl.h"

#ifndef MY_H_H
# define MY_H_H

typedef struct	s_node
{
  char		*key;
  struct s_node	*left;
  struct s_node	*right;
}		t_node;

typedef struct	s_info
{
  char		**my_env;
  pid_t		pid;
  int		fd;
  int		key;
}		t_info;

int	path_finder(char *str, t_info *info);
char	**my_env_remover(char **env, char *str);
int	cd_env(t_info *info, char *str);
int     my_getnbr(char *str);
char    **my_env_adder(char **env, char *strtoadd, char *content, int overwrite);
int	my_printtab(char **arr);
int     cd_args(char **arr);
void	my_pucherr(char c);
int	my_putsterr(char *str, int value);
int     my_exit(char *str);
int     my_setenv(char *str, t_info *info);
int     my_unsetenv(char *str, t_info *info);
int     my_chooser(char **array, int i, t_info *info);
int     my_cd(char *str, t_info *info);
char	**epur(char **tab);
char    **tab_to_tab(char **tab, int i, int a);
char    *my_strcat(char *dest, char *src);
char    *my_strdup(char *src);
int     shrub(t_node *arbre, char **array);
char    **ll_array_create(char **array);
int	my_launcher(char **arg);
char    **my_path_finder(char **env, char *str, char separator);
int	my_strcpy(char *dest, char *src);
int	main(int argc, char **argv, char **env);
char	**my_env_finder(char **env);
int	my_countword(char *str, char car);
int	my_countchar(char *str, char car);
char	**my_str_to_wordtab(char *str, char car, int b);
void	my_putchar(char c);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	core(t_info *info, t_node *arbre);
int	my_strncmp(char *dest, char *src, int l);
int     tree_creator(t_node *arbre, char **array, char **ll_array);
void	printTree(t_node *arbre);
t_node  *add_node(t_node *arbre, char **array, char **ll_array, int i);
int     my_exec(char **path, char **arr, t_info *info, int i);

#endif /*MY_H_H*/
