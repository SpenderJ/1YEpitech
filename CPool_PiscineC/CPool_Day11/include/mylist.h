/*
** mylist.h for emacs in /home/jules.spender/CPool_Day11
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Tue Oct 18 11:38:30 2016 Jules Spender
** Last update Tue Oct 18 11:40:23 2016 Jules Spender
*/

typedef struct		s_list
{
  void			*data;
  struct s_list		*next;
}			t_list;
