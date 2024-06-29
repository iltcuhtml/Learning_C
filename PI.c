#include <stdio.h>
#include <math.h>

#include <conio.h>

int main(void)
{
    unsigned int n = 1;
    double value = 0;
    double PI = 0;

    for (;;)
    {
        value += 1 / pow(n, 2);
        n++;

        PI = sqrt(value * 6);

        printf("n : %u", n);
        printf("PI : %lf", PI);
        printf("차이 : %lf", M_PI - PI);
    }

    getch();

    return 0;
}