#include <stdio.h>
#include <conio.h>

#include "RectClass.h"

int main(void)
{
    Rect *Rect1 = newRect({3, 5}, {6, 5}, {3, 10}, {6, 10});

    Rect1->draw(Rect1->this);

    deleteRect(Rect1);

    getch();

    return 0;
}
