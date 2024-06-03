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

    Rect1.delete(Rect1);
    Rect2.delete(Rect2);
    Rect3.delete(Rect3);

    getch();
    
    return 0;
}
