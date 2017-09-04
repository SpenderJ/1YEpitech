/*
** main.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_palindrome_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Thu Jun 15 09:54:29 2017 Jules Spender
** Last update Tue Jun 20 02:49:25 2017 Jules Spender
*/

#include "my_h.h"

int	main(int argc, char **argv)
{
  char	**file;

  if (argc < 2 || argc > 3)
    return (my_putsterr("invalid argument\n"));
  else if (argv[1] != NULL && argc == 2 && my_strcmp(argv[1], "-h") == 0)
    return (help_displayer(argv[0]));
  if ((is_flag(argv[1]) != 0))
      return (my_putsterr("Unable to read on the standard output\n"));
  if ((strcmp(argv[1], "4") == 0 && argc == 2) ||\
      (strcmp(argv[1], "4") != 0 && argc == 3) ||\
      (strcmp(argv[1], "4") == 0 && argc == 3 && atoi(argv[2]) <= 0))
    return (my_putsterr("invalid argument\n"));
  else if ((file = my_opener()) == NULL)
    return (my_putsterr("Unable to read on the standard output\n"));
  else
    return (my_parser(argv[1], file, argv));
      return (0);
}

int	is_flag(char *str)
{
  if (strcmp(str, "1") == 0)
    return (0);
  else if (strcmp(str, "2") == 0)
    return (0);
  else if (strcmp(str, "3") == 0)
    return (0);
  else if (strcmp(str, "4") == 0)
    return (0);
  else if (strcmp(str, "5") == 0)
    return (0);
  else if (strcmp(str, "6") == 0)
    return (0);
  else if (strcmp(str, "7") == 0)
    return (0);
  else
    return (84);
}

int	my_parser(char *str, char **file, char **argv)
{
  if (file == NULL)
    return (my_putsterr("invalid argument\n"));
  if ((file = epur_tab(file)) == NULL)
    return (my_putsterr("invalid argument\n"));
  if (strcmp(str, "1") == 0)
    return (option_1(file));
  else if (strcmp(str, "2") == 0)
    return (option_2(file));
  else if (strcmp(str, "3") == 0)
    return (option_3(file));
  else if (strcmp(str, "4") == 0)
    return (option_4(file, argv[2]));
  else if (strcmp(str, "5") == 0)
    return (option_5(file));
  else if (strcmp(str, "6") == 0)
    return (option_6(file , 0, 0, 0));
  else if (strcmp(str, "7") == 0)
    return (option_7(file));
  else
    return (my_putsterr("invalid argument\n"));
}
