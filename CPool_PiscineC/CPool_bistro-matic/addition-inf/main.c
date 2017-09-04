/*
** main.c for emacs in /home/david.xu/CPool_infinadd
** 
** Made by david xu
** Login   <david.xu@epitech.net>
** 
** Started on  Wed Oct 26 17:59:34 2016 david xu
** Last update Wed Nov  2 15:43:31 2016 Jules Spender
*/

int     my_putstr(char *str);
char	*infin_add(char **argv);

int	main(int argc, char **argv)
{
  my_putstr(infin_add(argv));
  return (0);
}
