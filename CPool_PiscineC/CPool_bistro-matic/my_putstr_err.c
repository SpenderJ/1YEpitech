/*
** my_putstr_err.c for emacs in /home/Jules.Spender/CPool_bistro-matic
** 
** Made by Jules Spender
** Login   <Jules.Spender@epitech.net>
** 
** Started on  Sun Nov  6 21:34:13 2016 Jules Spender
** Last update Sun Nov  6 21:45:47 2016 Jules Spender
*/

#include <unistd.h>

void	my_putchar_error(char c)
{
  write(2, "syntax error\n", 12);
