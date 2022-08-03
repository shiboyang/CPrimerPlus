#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void show_array(const double arr[], int n);
double * nd_array(int n, ...);


int main(void)
{
    double * p1;
    double * p2;

    p1 = nd_array(5, 1.0, 1.1, 23.32, 23.125, 2.5657);
    p2 = nd_array(4, 3333.2, 3566.1, 3557.123, 2354.0);

    show_array(p1, 5);
    show_array(p2, 4);

    free(p1);
    free(p2);

    return 0;
}

void show_array(const double arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%lf\n", arr[i]);
    }

    puts("----------");

}

double * nd_array(int n, ...)
{
    double * p = (double *) malloc(n * sizeof(double));
    double * pt = p;
    va_list ap;

    va_start(ap, n);
    for (int i=0; i<n; i++)
    {
        *pt= va_arg(ap, double);
        pt++;
    }
    va_end(ap);

    return p;
}