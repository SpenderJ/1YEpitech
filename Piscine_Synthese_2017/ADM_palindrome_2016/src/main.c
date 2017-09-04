/*
** main.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_palindrome_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Thu Jun 15 09:54:29 2017 Jules Spender
** Last update Thu Jun 15 11:46:19 2017 Jules Spender
*/

#include "my_h.h"

int	main(int argc, char **argv)
{
  if (argv[1] != NULL && my_strcmp(argv[1], "-h") == 0)
    return (help_displayer(argv[0]));
  if (argc < 3 || argc > 9)
    return (my_putsterr("invalid argument\n"));
  else
    return (palindrome(argc, argv));
}
