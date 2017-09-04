/*
** my.h for  in /home/Pandarkricci/Semesters/2/Graphical/tekadventure
** 
** Made by Lucas Ricci
** Login   <Pandarkricci@epitech.net>
** 
** Started on  Wed Mar 29 13:25:15 2017 Lucas Ricci
** Last update Sun May 28 19:42:11 2017 ugo bensaid
*/

#ifndef MY_H_
# define MY_H_

# define SCRHEIGHT 800
# define SCRWIDTH 600
# define SCRBPP 32

# include <unistd.h>
# include <SFML/Audio.h>
# include <SFML/Graphics.h>
# include <SFML/System.h>
# include <SFML/Graphics/Texture.h>

typedef struct	s_collision
{
  sfVector2f	pos_plane;
  sfVector2f	pos_balloon;
  sfVector2f	pos_spoink;
  sfVector2f	pos_mario;
}		t_collision;

int		mario(sfRenderWindow *window, t_collision *collision);
void		set_scale(sfSprite *sprite, float size);
int		hills(sfRenderWindow *window);
int		sky(sfRenderWindow *window);
int		ground(sfRenderWindow *window);
int		cactus_boule(sfRenderWindow *window, t_collision *collision);
int		plane(sfRenderWindow *window, t_collision *collision);
int		balloon(sfRenderWindow *window, t_collision *collision);
int		spoink(sfRenderWindow *window, t_collision *collision);
int		c_cactus(t_collision *);
int		c_spoink(t_collision *collision);
int		c_balloon(t_collision *);
int		c_plane(t_collision *);
sfSprite	*create_sprite(char *filename);

#endif /* !MY_H_ */
