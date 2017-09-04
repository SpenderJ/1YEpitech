/*
** scroller_music.c for emacs in /home/jules/Info/scroller/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sun Apr  2 11:19:42 2017 Jules Spender
** Last update Mon Apr 24 11:27:11 2017 Jules Spender
*/

#include "my_h.h"

sfMusic	*scroller_music(char *str)
{
  sfMusic	*music;
  int		i;

  i = 0;
  if (str == NULL)
    return (NULL);
  while (str[i] != '.' && str[i] != '\0')
    i = i + 1;
  if (str[i] == '\0')
    return (NULL);
  if ((str = pars_str(str)) == NULL)
    return (NULL);
  music = sfMusic_createFromFile(str);
  if (!music)
    return (NULL);
  sfMusic_play(music);
  return (music);
}

char	*pars_str(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '.')
    i = i + 1;
  if (i == 0)
    return (NULL);
  i = i + 1;
  if (strcmp(&str[i], "ogg") == 0)
    return (str);
  else if (strcmp(&str[i] , "bsf") == 0)
    return (pars_bsr(str));
  else
    return (NULL);
}

char	*pars_bsr(char *str)
{
  int	fd;
  int	i;
  char	*pasteque;

  i = 0;
  if ((pasteque = strdup(str)) == NULL)
    return (NULL);
  if ((fd = open(pasteque, O_RDONLY)) == -1)
    return (NULL);
  if (strncmp(get_next_line(fd), "[track1]", 8) != 0)
    return (NULL);
  if ((pasteque = strdup(get_next_line(fd))) == NULL)
    return (NULL);
  while (pasteque[i] != '"')
    i = i + 1;
  i = i + 1;
  if ((pasteque = strdup(&pasteque[i])) == NULL)
    return (NULL);
  while (pasteque[i++] != '"');
  pasteque[i - 1] = '\0';
  if ((pasteque = my_strcat(pasteque, "music/")) == NULL)
    return (NULL);
  return (pasteque);
}

int	music_stop(sfMusic *music)
{
  sfMusic_destroy(music);
  return (0);
}
