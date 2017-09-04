/*
** my_ls.c for emacs in /home/jules/PSU_2016_my_ls
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Wed Nov 30 13:49:46 2016 Jules Spender
** Last update Fri Dec  2 12:08:58 2016 Jules Spender
*/

#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>

void	my_putchar(char c);
int	my_putstrls(char *str);
int	my_ls(int argc, char **argv);

int	main(int argc, char **argv)
{
  int	i;
  char	*flag;
  char	*flagorder;

  flag = malloc(sizeof(char) * argc);
  i = 1;
  if (argc == 1)
    {
      my_ls(argc, argv);
      return (0);
    }
  else if (argc > 1)
    {
      flag = myboi(argc, argv);
    }
}
int	my_ls(int argc, char **argv)
{
  DIR		*namefiles;
  struct dirent	*readfiles;
  int		n;
  
  namefiles = opendir(".");
  while ((readfiles = readdir(namefiles)) != NULL)
    my_putstrls(readfiles->d_name);
  closedir(namefiles);
  return (0);
}

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstrls(char *str)
{
  int	i;
  
  i = 0;
  if (str[0] == '.')
    return (0);
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  my_putchar('\n');
  return (0);
}

char  	*myboi(int argc, char **argv)
{
  int	i;
  int	a;
  int	flagnumber;
  char	*flag;

  i = 1;
  flag = malloc(sizeof(char) * argc);
  while (i <= argc)
    {
      a = 0;
      if (argv[i][a] == '-')
	{
	  a = a + 1;
	  while (argv[i][a] != '\0')
	    {
	      flag[flagnumber] = argv[i][a];
	      flagnumber = flagnumber + 1;
	      a = a + 1;
	    }
	}
      i = i + 1;
    }
  return (flag);
}
