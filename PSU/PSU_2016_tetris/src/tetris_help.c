/*
** tetris_help.c for emacs in /home/jules/PSU/PSU_2016_tetris
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Feb 28 14:25:10 2017 Jules Spender
** Last update Wed Mar 15 17:39:21 2017 Jules Spender
*/

#include "my_h.h"

int	tetris_help(char **argv)
{
  my_putstr("Usage:   ");
  my_putstr(argv[0]);
  my_putstr(" [options]\n");
  my_putstr("Options:\n");
  my_putstr("   --help\t\tDisplay this help\n");
  my_putstr("   -l --level={num}\t");
  my_putstr("Start Tetris at level num (def:  1)\n");
  my_putstr("   -kl --key-left={K}\t");
  my_putstr("Move the tetrimino LEFT using the K key (def:  left arrow)\n");
  my_putstr("   -kr --key-right={K}\t");
  my_putstr("Move the tetrimino RIGHT using the K key (def:  right arrow)\n");
  my_putstr("   -kt --key-turn={K}\tTURN the tetrimino");
  my_putstr(" clockwise 90d using the K key (def:  top arrow)\n");
  my_putstr("   -kd --key-drop={K}\t");
  my_putstr("DROP the tetrimino using the K key (def:  drop arrow)\n");
  my_putstr("   -kq --key-quit={K}\tQUIT the game using the K key (def:  ");
  my_putstr("'Q' key)\n   -kp --key-pause={K}\tPAUSE/RESTART the game using");
  my_putstr(" the K key (def:  space bar)\n   --map-size={row,col}\tSet the");
  my_putstr(" numbers of rows and columns of the map (def:  20,10)\n   -w ");
  my_putstr("--without-next\tHide next tetrimino (def:  false)\n   -d ");
  my_putstr("--debug\t\tDebug mode (def:  false)\n");
  return (0);
}
