# include <stdio.h>
# include "9.h"

int main(void)
{
    double a, b, c, t;
    a = 99999.0f;
    b = 1000.0f;
    c = 100.0f;


    Fibonacci(5);

    int m;
    m = FibRec(3);
    printf("\n%d", m);

    return 0;
}