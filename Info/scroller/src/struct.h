/*
** struct.h for struct in /home/yoann.sarkissian/SCROLLER/background
** 
** Made by Yoann Sarkissian
** Login   <yoann.sarkissian@epitech.net>
** 
** Started on  Sun Apr  2 01:32:21 2017 Yoann Sarkissian
** Last update Sun Apr  2 20:46:28 2017 blaise carnevillier
*/

#ifndef STRUCT_H_
# define STRUCT_H_

# include <SFML/Graphics.h>
# include <SFML/Audio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_all
{
  sfRenderWindow	*window;
  sfTexture		*texture;
  sfTexture		*texture2;
  sfSprite		*sprite;
  sfSprite		*sprite2;
  sfSprite		*sprite3;
  sfSprite		*sprite4;
  sfMusic		*music;
  sfEvent		event;
  sfVector2f		pos;
  sfVector2f		pos2;
  sfVector2f		pos3;
  sfVector2f		pos4;
  sfVector2f		scale1;
  sfVector2f		scale2;
}			t_all;

#endif /* STRUCT_H_ */
