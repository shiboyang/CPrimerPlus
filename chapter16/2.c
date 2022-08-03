#include <stdio.h>
#include <stdlib.h>

#define HMEAN(X,Y) (2.0 * (X) *(Y) / ((X) + (Y)))


int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Operation error!");
        exit(EXIT_FAILURE);
    }


    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int r = HMEAN(a, b);
    printf("%d", r);
    return 0;
}
