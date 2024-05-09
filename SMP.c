#include <stdio.h>
#include <conio.h>

int SMP(int area); // SMP = Solve Math Problem

int main()
{
    printf("%d", SMP(2));

    getch();

    return 0;
}

int SMP(int area)
{
    int Sum = 0;

    for (int j = 1; j <= 10; j++) {
        for (int i = 1; i <= j; i++) {
            Sum += i * area;
        }
    }

    return Sum;
}