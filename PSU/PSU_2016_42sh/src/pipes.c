/*
** pipes.c for emacs in /home/ugo/PSU_2016_42sh
** 
** Made by Ugo
** Login   <ugo.bensaid@epitech.eu@epitech.net>
** 
** Started on  Wed May  3 14:07:58 2017 Ugo
** Last update Wed May  3 14:29:28 2017 Ugo
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int	main()
{
  int	pid;
  char	message[256];
  int	pipefd[2];

  pid = getpid();
  pipe(pipefd);
  pid = fork();
  if (pid != 0)
    {
      printf("pid = %d\n", pid);
      sprintf(message, "Hi, I am the father");
      write(1, message, strlen(message));
    }
  return (0);
}
