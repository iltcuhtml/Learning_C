#include <stdio.h>
#include <stdlib.h>

#include <conio.h>

#include "RectClass.h"

int main(void)
{
    Rect *Rect1 = newRect(4, 5);
    Rect *Rect2 = newRect(7, 15);

    Rect1->draw(Rect1->this);
    Rect2->draw(Rect2->this);

    deleteRect(Rect1);
    deleteRect(Rect2);

    getch();

    return 0;
}