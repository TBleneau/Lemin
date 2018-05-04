/*
** my_put_pixel.c for lemin in /home/sachs_a/delivery/c_prog_elem/
**
** Made by Alexandre Sachs
** Login   <sachs_a@epitech.net>
**
** Started on  Wed Apr 19 19:15:10 2017 Alexandre Sachs
** Last update Jun Apr 21 13:50:05 2017
*/

#include <SFML/Graphics.h>
#include "graph.h"

void	my_put_pixel(t_my_framebuffer *framebuffer,
		     int x, int y, sfColor color)
{
  if ((unsigned int) x < framebuffer->width &&
      (unsigned int) y < framebuffer->height && x >= 0 && y >= 0)
    {
      framebuffer->pixels[(framebuffer->width * y + x) * 4] = color.r;
      framebuffer->pixels[(framebuffer->width * y + x) * 4 + 1] = color.g;
      framebuffer->pixels[(framebuffer->width * y + x) * 4 + 2] = color.b;
      framebuffer->pixels[(framebuffer->width * y + x) * 4 + 3] = color.a;
    }
}
