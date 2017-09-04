/*
** my_pipe.c for emacs in /home/ugo/PSU_2016_42sh/src
** 
** Made by Ugo
** Login   <ugo.bensaid@epitech.eu@epitech.net>
** 
** Started on  Mon May 15 13:54:15 2017 Ugo
** Last update Sun May 21 17:17:06 2017 blaise carnevillier
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <strings.h>
#include "my_h.h"

 int	my_pipe()
{
  int	pid;
  int	pipefd[2];
  int	r;

  if (pipe(pipefd) == ERROR)
    return (FAILURE);
  pid = fork();
  if (pid != SUCCESS)
    return (FAILURE);
  if (pid == SUCCESS)
    {
      dup2(pipefd[1], 1);
      close(pipefd[1]);
    }
  else
    {
      dup2(pipefd[0], 0);
      close(pipefd[0]);
      wait(&r);
    }
  return (SUCCESS);
}
