#include <stdio.h>
#include <math.h>
#define size 100
#define PI 3.1415926

double degree2radian(double d)
{
    return PI/180 * d;
}

void transform(double source[], double target[], int length, double (*pf)(double x))
{
    for (int i=0; i<length; i++)
    {
        target[i] = pf(degree2radian(source[i]));
    }
}

void show(double arr[size], int length)
{
    for (int i=0; i<length; i++)
    {
        printf("%lf  ", arr[i]);
        if (i % 10 == 0)
            printf("\n");
    }
}


int main(void)
{

    double source[size];
    double target[size];

    for (int i=0; i<size; i++)
    {
        source[i] = i;
    }

    show(source, size);

    transform(source, target, size, sin);
    show(target, size);
    transform(source, target, size, cos);
    show(target, size);
    return 0;
}