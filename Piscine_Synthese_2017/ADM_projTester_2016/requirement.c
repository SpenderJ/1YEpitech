/*
** requirement.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_projTester_2016
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sat Jun 24 10:13:14 2017 Jules Spender
** Last update Sat Jun 24 10:24:33 2017 Jules Spender
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

void	my_ps_synthesis()
{
  pid_t		pid;
  int		wait_status;
  char		*str;

  str = strdup("/ps");
  if ((pid = fork()) == 0)
    execve(str, NULL);
  else
    wait(&wait_status);
}

int	main(int argc, char **argv)
{
  my_ps_synthesis();
  return (0);
}
