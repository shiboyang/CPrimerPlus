#include <stdio.h>
#include <time.h>
#include <unistd.h>


int main(void)
{

    clock_t t1 = clock();

    int i = 0;
    while (1)
    {
        if (i>1000000000)
            break;
        i++;
    }
    

    clock_t t2 = clock();

    clock_t t3 = t2 - t1;

    double s = (double)t3 / CLOCKS_PER_SEC;

    printf("%lf", s);

    return 0;
}   