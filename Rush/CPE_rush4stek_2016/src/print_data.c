/*
** print_data.c for rush4stek in /home/hecto/r4s/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Sat Jun  3 08:10:49 2017 blaise carnevillier
** Last update Sun Jun  4 22:32:47 2017 blaise carnevillier
*/

#include "ncurses.h"
#include "../includes/n4s.h"
#include "getnextline.h"

char	*get_time(char *str)
{
  char *st;
  int	i;
  int	y;

  if ((st = malloc(sizeof(char) * strlen(str))) == NULL)
    return (NULL);
  i = -1;
  while (str[++i] != '[' && str[i] != 0);
  y = 0;
  i++;
  while (str[i] != ']' && str[i] != 0 && str[i] != ',')
    st[y++] = str[i++];
  st[y] = '\0';
  return (st);
}

sfText  *init_text(char *str, sfFont *font)
{
  sfText        *text;

  text = sfText_create();
  sfText_setString(text, str);
  sfText_setFont(text, font);
  sfText_setColor(text, sfRed);
  sfText_setCharacterSize(text, 50);
  return (text);
}

sfText	*print_data(int i, sfFont *font)
{
  char		*str;
  sfText	*txt;
  sfVector2f	v1;

  if (i == 0 || i == 1)
    {
      if (i == 0)
	my_putstr("get_current_speed\n");
      else
	my_putstr("get_current_wheels\n");
      v1 = setvector(i);
      str = check_str(get_next_line(0));
      txt = init_text(str, font);
      sfText_setPosition(txt, v1);
      return (txt);
    }
  my_putstr("get_info_simtime\n");
  str = get_time(get_next_line(0));
  txt = init_text(str, font);
  v1.x = 600;
  v1.y = 380;
  sfText_setPosition(txt, v1);
  return (txt);
}

sfVector2f	setvector(int i)
{
  sfVector2f	v1;

  if (i == 0)
    {
      v1.x = 585;
      v1.y = 550;
    }
  else if (i == 1)
    {
      v1.x = 150;
      v1.y = 300;
    }
  return (v1);
}
