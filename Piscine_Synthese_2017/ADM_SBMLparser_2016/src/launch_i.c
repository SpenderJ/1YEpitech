/*
** launch_i.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_SBMLparser_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Jun 13 09:49:54 2017 Jules Spender
** Last update Wed Jun 14 13:21:30 2017 Jules Spender
*/

#include "my_h.h"

int	launch_i(char **file, char **argv)
{
  if (argv[3] != NULL && (check_compartements(file, argv[3]) == 0)\
      && argv[4] == NULL)
    return (print_compartements(file, argv[3]));
  else if (argv[3] != NULL && (check_product(file, argv[3]) == 0)\
	   && argv[4] == NULL)
    return (print_product(file, argv[3]));
  else if (argv[3] != NULL && (check_reac(file, argv[3]) == 0)\
	   && argv[4] == NULL)
    return (print_reac(file, argv[3]));
  else if (argv[4] != NULL && (my_strcmp(argv[4], "-e") == 0))
    return (launch_e(file, argv));
  else if (argv[4] != NULL && (my_strcmp(argv[4], "-json") == 0))
    return (84);
  else
    return (print_species(file));
}

int	launch_e(char **file, char **argv)
{
  if (argv[3] != NULL && (check_reac(file, argv[3]) == 0))
    return (print_e_reac(file));
  else
    return (print_species(file));
}
