#include <stdio.h>
#include <math.h>

#include <conio.h>

void setValues(unsigned int n, double value);
void saveValues(unsigned int n, double value);

int main(void)
{
    unsigned int n = 1;
    double value = 0;
    double PI;

    setValues(n, value);

    for (;;)
    {
        value += 1 / pow(n, 2);
        n++;

        PI = sqrt(value * 6);

        printf("n : %u\n", n);
        printf("PI : %le\n", PI);
        printf("오차 : %le\n\n", M_PI - PI);

        saveValues(n, value);
    }

    getch();

    return 0;
}

void setValues(unsigned int n, double value)
{
    FILE* fp = fopen("PI.txt", "r");

    if (fp == NULL)
    {
        fclose(fp);

        fp = fopen("PI.txt", "w");
        fprintf(fp, "%d %le", n, value);

        fclose(fp);

        return;
    }

    fscanf(fp, "%d%le", &n, &value);

    fclose(fp);

    return;
}

void saveValues(unsigned int n, double value)
{
    FILE* fp = fopen("PI.txt", "w");
    fprintf(fp, "%d %le", n, value);

    fclose(fp);

    return;
}