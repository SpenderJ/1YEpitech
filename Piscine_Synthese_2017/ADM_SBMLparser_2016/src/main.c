/*
** main.c for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 12 10:18:44 2017 Jules Spender
** Last update Wed Jun 14 13:25:40 2017 Jules Spender
*/

#include "my_h.h"

int	main(int argc, char **argv)
{
  int	i;

  i = 1;
  if ((my_strcmp(argv[i], "-h")) == 0)
    return (help_displayer(argv[0]));
  if (argc <= 1 || argc > 5)
    return (my_putsterr("Wrong Usage : ./SBMLparser -h will display help"));
  else
    return (sbml_parser(argc, argv));
}
