#include <stdio.h>
#include <math.h>

#include <conio.h>

void setValues();
void saveValues();

int main(void)
{
    unsigned int n = 1;
    double value = 0;
    double PI;

    setValues();

    for (;;)
    {
        value += 1 / pow(n, 2);
        n++;

        PI = sqrt(value * 6);

        printf("n : %u\n", n);
        printf("PI : %le\n", PI);
        printf("오차 : %le\n\n", M_PI - PI);

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
        fclose(fp);

        fp = fopen("PI.txt", "w");
        fprintf(fp, "%d %d", n, value);

        fclose(fp);

        return;
    }

    fscanf(fp, "%d%d", &n, &value);

    fclose(fp);

    return;
}

void saveValues()
{
    FILE* fp = fopen("PI.txt", "w");
    fprintf(fp, "%d %d", n, value);

    fclose(fp);

    return;
}