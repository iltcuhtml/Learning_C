#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

#include <conio.h>

unsigned int n = 1;
long double value = 0.0L;
long double PI = 0.0L;

void setValues(); // has problem with load the values
void saveValues();

int main(void)
{
    setValues();

    for (;;)
    {
        value += 1.0L / pow(n, 2.0L);
        PI = sqrt(value * 6.0L);

        printf("n : %u\n", n);
        printf("PI : %.64Lf\n", PI);
        printf("dif : %.64Lf\n\n", M_PI - PI);
        
        n++;

        saveValues();
    }

    getch();

    return 0;
}

void setValues()
{
    FILE* fp = fopen("PI.txt", "r");

    if (fp == NULL)
    {
        return;
    }

    fscanf(fp, "%u %Lf", &n, &value);

    fclose(fp);

    return;
}

void saveValues()
{
    FILE* fp = fopen("PI.txt", "w");
    fprintf(fp, "%u %.64Lf\n\n", n, value);

    fclose(fp);

    return;
}