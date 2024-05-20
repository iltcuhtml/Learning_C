#include <stdio.h>
#include <conio.h>

typedef struct
{
    int num1, num2;

    int (*add)(int, int), (*sub)(int, int);
} myMath;

int add_func(int num1, int num2)
{
    return num1 + num2;
}

int sub_func(int num1, int num2)
{
    return num1 - num2;
}

int main()
{
    int num1, num2;

    printf("num1 : ");
    scanf("%d", &num1);

    printf("num2 : ");
    scanf("%d", &num2);

    myMath myData = {num1, num2, &add_func, &sub_func};

    int add_result = myData.add(myData.num1, myData.num2);
    int sub_result = myData.sub(myData.num1, myData.num2);

    printf("add result : %d, sub result : %d", add_result, sub_result);

    getch();

    return 0;
}