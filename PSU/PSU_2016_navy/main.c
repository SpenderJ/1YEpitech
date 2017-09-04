/*
** main.c for navy in /home/hecto/navy
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Mon Jan 30 12:39:15 2017 blaise carnevillier
** Last update Tue Jan 31 16:02:35 2017 blaise carnevillier
*/

#include"proto.h"

int	print_help()
{
  my_printf("USAGE\n\t./navy [first_player_pid] navy_positions\n\n");
  my_printf("DESCRIPTION\n\tfirst_player_pid only for the 2nd player.");
  my_printf("pid of the first player,\n\tnavy_positions   file");
  my_printf("representing the positions of the ships.\n");
  return (0);
}

void	print_tab(char **tab, int b)
{
  char	i;
  char	y;
  int	s;

  i = 0;
  if (b == 1)
    write(1, "my positions:\n |A B C D E F G H\n-+---------------\n", 50);
  else
    write(1, "enemy's positions:\n |A B C D E F G H\n-+---------------\n", 55);
  while (tab[i] != NULL)
    {
      my_printf("%d|", i);
      y = 0;
      while (y <= 8)
	{
	  if (y != 8)
	    my_printf("%c ", tab[i][y]);
	  else
	    my_printf("%c\n", tab[i][y]);
	  y++;
	}
      i++;
    }
  write(1, "\n\n", 2);
}


int	is_in_coord(int i, int y, char **coord)
{
  int x;

  x = 0;
  y += 'A';
  i += '0';
  while (coord[x] != NULL)
    {
      if (coord[x][2] == coord[x][5])
	{
	  if ((y == coord[x][2]) && (i >= coord[x][3] && i <= coord[x][6]))
	    return (coord[x][0]);
	}
      else
	{
	  if ((i == coord[x][3]) && (y  >= coord[x][2] && y  <= coord[x][5]))
	    return (coord[x][0]);
	}
      x++;
    }
  return (-1);
}

int	init_tabs(char **coord)
{
  int	i;
  int	y;
  int	s;
  char	**my_tab;
  char	**en_tab;

  i = 0;
  my_tab = malloc(sizeof(char*) * 10);
  en_tab = malloc(sizeof(char*) * 10);
  while (i < 8)
    {
      en_tab[i] = malloc(sizeof(char) * 10);
      my_tab[i] = malloc(sizeof(char) * 10);
      y = 0;
      while (y < 8)
	{
	  en_tab[i][y] = '.';
	  if ((s = is_in_coord(i + 1, y, coord)) != -1)
	    my_tab[i][y] = s;
	  else
	    my_tab[i][y] = '.';
	  y++;	      
	}
      i++;
    }
  play(my_tab, en_tab);
}

int	main(int ac, char **av)
{
  int	fd;
  int	i;
  int	j;
  char	*str;
  char	**tab;
    
  i = 0;
  tab = malloc(sizeof(char*) * 5); 
  if ((ac == 2 || ac == 3) && (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0'))
    return (print_help());
  if (!(ac == 2 || ac == 3) || (fd = open(av[1], O_RDONLY)) == -1)
    return (84);
  network(ac);
  while (str = get_next_line(fd))
    {
      j = 0;
      tab[i] = malloc(sizeof(char) * 12);
      while (str[j] != '\0')
	tab[i][j] = str[j++];
      i++;
    }
  init_tabs(tab);
  return (0);
}
