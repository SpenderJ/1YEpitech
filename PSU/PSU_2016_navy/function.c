/*
** function.c for navy in /home/hecto/navy
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Tue Jan 31 15:37:14 2017 blaise carnevillier
** Last update Tue Jan 31 16:11:12 2017 blaise carnevillier
*/

#include"proto.h"

int	network(int ac)
{
  my_printf("my_pid:  %d\n", getpid());
  if (ac == 2)
    {
      my_printf("waiting for enemy connexion...\n");
    }
  else if (ac == 3)
    {
      
    }
}
int	play(char **my_tab, char **en_tab)
{
  print_tab(my_tab, 1);
  print_tab(en_tab, 1);
}
