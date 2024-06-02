#include <stdio.h>
#include <stdlib.h>

#include <conio.h>

#include "RectClass.h"

int main(void)
{
    Rect Rect1 = newRect(4, 5);
    Rect Rect2 = newRect(7, 10);
    Rect Rect3 = newRect(10, 5);

    Rect1.draw(Rect1);
    Rect2.draw(Rect2);
    Rect3.draw(Rect3);

    deleteRect(Rect1);
    deleteRect(Rect2);
    deleteRect(Rect3);

    getch();
    
    return 0;
}
