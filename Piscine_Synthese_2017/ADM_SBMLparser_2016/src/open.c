/*
** open.c for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 12 10:54:53 2017 Jules Spender
** Last update Wed Jun 14 13:24:18 2017 Jules Spender
*/

#include "my_h.h"

char	**my_opener(char *namefile)
{
  char	**file;
  char	*s;
  int	fd;
  int	i;

  i = 0;
  if ((fd = open(namefile, O_RDONLY)) == -1)
    return (NULL);
  if ((file = malloc(sizeof(char *) * (i + 1))) == NULL)
    return (NULL);
  file[i] = NULL;
  while (((s = get_line(fd)) != NULL) && s[0] != '\0')
    {
      file = tab_realloc(file);
      file[i] = s;
      file[i + 1] = NULL;
      ++i;
    }
  close (fd);
  return (file);
}

char	*get_line(int fd)
{
  char	*line;
  int	i;
  char	*s;
  int	ret;

  i = 0;
  if ((s = malloc(sizeof(char) * (i + 1))) == NULL)
    return (NULL);
  if ((line = malloc(sizeof(char) * (i + 1))) == NULL)
    return (NULL);
  line[i] = '\0';
  while (fd != -1 && ((ret = read(fd, s, 1)) > 0) && s[0] != '\0')
    {
      line[i] = '\0';
      line = str_realloc(line);
      line[i] = s[0];
      ++i;
    }
  if (ret < 0)
    return (NULL);
  line[i] = '\0';
  free(s);
  return (line);
}

char	*str_realloc(char *str)
{
  char	*s;
  int	i;

  i = 0;
  if (str == NULL)
    {
      if ((s = malloc(sizeof(char) * (i + 20))) == NULL)
	return (NULL);
      return (s);
    }
  while (str[i] != '\0')
    ++i;
  if ((s = malloc(sizeof(char) * (i + 20))) == NULL)
    return (NULL);
  i = 0;
  while (str[i] != '\0')
    {
      s[i] = str[i];
      ++i;
    }
  free (str);
  s[i] = '\0';
  return (s);
}

char	**tab_realloc(char **file)
{
  int	i;
  char	**newfile;

  i = 0;
  if (file == NULL)
    {
      if ((newfile = malloc(sizeof(char *) * (i + 1))) == NULL)
	return (NULL);
      free(file);
      return (newfile);
    }
  while (file[i++] != NULL);
  if ((newfile = malloc(sizeof(char *) * (i + 1))) == NULL)
    return (NULL);
  i = -1;
  while (file[++i] != NULL)
    newfile[i] = file[i];
  newfile[i] = NULL;
  free(file);
  return (newfile);
}
