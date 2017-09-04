/*
** hitbox2glace.c for tekadventure in /home/hecto/tekadventure/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Fri May 26 10:56:58 2017 blaise carnevillier
** Last update Sun May 28 16:36:03 2017 blaise carnevillier
*/

int	hit_box_right2(int x, int y)
{
  if (x >= 760)
    return (1);
  else if (x >= 760 && y == 387)
    return (1);
   else if (x == 330 && y >= 560)
     return (1);
   else if (x == 480 && y == 500)
     return (1);
  else if (x >= 520 && y == 347)
    return (1);
  return (0);
}

int	hit_box_down2(int x, int y)
{
  if (y > 560 )
    return (1);
  else if (x >= 760 && y == 400)
   return (1);
  else if ((x == 353 || x == 356) && y == 500)
    return (1);
  else if (x == 520 && y == 477)
    return (1);
  return (0);
}

int	hit_box_up2(int	x, int y)
{
  if (y <= 138)
    return (1);
  else if (x >= 760 && y == 496)
    return (1);
  else if (x == 546 && y == 387)
    return (1);
  else if (x == 330 && y == 431)
    return (1);
  else if ((x == 353 || x == 356) && y == 347)
    return (1);
  return (0);
}

int	hit_box_left2(int x, int y)
{
  if (x <= 117)
    return (1);
  else if (x == 403 && y >= 560)
    return (1);
  else if (x == 545 && y == 496)
    return (1);
  else if (x == 352 && y == 387)
    return (1);
  else if (x == 500 && y == 257)
    return (1);
  else if (x == 547 && y == 500)
    return (1);
  else if (x == 352 && y == 400 || x == 355 && y == 347)
    return (1);
  else if (x == 333 && y >= 560)
     return (1);
  return (0);
}
