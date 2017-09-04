/*
** my.h for  in /home/Pandarkricci/Semesters/2/Graphical/tekadventure
** 
** Made by Lucas Ricci
** Login   <Pandarkricci@epitech.net>
** 
** Started on  Wed Mar 29 13:25:15 2017 Lucas Ricci
** Last update Sun Jun  4 22:43:24 2017 blaise carnevillier
*/

#ifndef MY_H_
# define MY_H_

# define SCRHEIGHT 800
# define SCRWIDTH 600
# define SCRBPP 32

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include "../includes/include/SFML/Audio.h"
# include "../includes/include/SFML/Graphics.h"
# include "../includes/include/SFML/System.h"
# include "../includes/include/SFML/Graphics/Texture.h"
# include <stdio.h>

typedef struct s_move
{
  float	t;
  float	r;
  char	*lap;
}		t_move;

sfVector2f	setvector(int i);
int		is_in(char*, char*);
char		**my_str_to_wordtab(char*, char, int);
void		my_put_nbr(int);
void            printfloat(float);
int		get_event(sfRenderWindow *win);
int		print_background(sfTexture *texture, sfRenderWindow *win);
char		*get_next_line(const int);
char		*check_str(char *);
int		moves(t_move*, sfRenderWindow*, sfFont*);
int		my_strcmp(char*, char*);
int		my_printf(char*, ...);
sfText		*print_data(int, sfFont*);
void		my_putstr(char *);
sfTexture*	l_b(sfRenderWindow *win, char *str, sfFont* font, t_move*);
sfTexture*	l_b2(sfRenderWindow *win, sfFont *font, char **tab, t_move *m);

#endif /* !MY_H_ */
