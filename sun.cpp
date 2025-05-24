#include "graphics.h"
#include "picture.hpp"

void sun () 
{
   initwindow(800, 600);
   line(2, 2, 50, 50);
   circle(50, 50, 10);
   line(50, 50, 98, 98);
   getch();
   closegraph();
}