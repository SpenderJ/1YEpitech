/*
** my_h.h for scroller in /home/hecto/Rush_Scroller/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Sat Apr  1 17:02:31 2017 blaise carnevillier
** Last update Sun Apr  2 22:45:38 2017 Jules Spender
*/

# ifndef MY_H_
# define MY_H_

# ifndef READ_SIZE
#  define READ_SIZE 1024 
# endif

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "../include/include/SFML/Graphics.h"
#include "../include/include/SFML/System.h"
#include "../include/include/SFML/Graphics/Texture.h"
#include "../include/include/SFML/Audio.h"

int	background(sfRenderWindow*);

int	landscape(sfRenderWindow*);

int	text_scroller(char**, sfRenderWindow*, int, sfMusic*);

sfRenderWindow	*create_win(char*, int, int);

sfMusic	*scroller_music(char*);

int	music_stop(sfMusic*);

char    *pars_str(char*);

char    *pars_bsr(char*);

char	*get_next_line(const int fd);

char	*my_strcat(char*, char*);

#endif /* !My_H_H */
