#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

#define size CHAR_BIT * sizeof(int)

unsigned int rotate(unsigned int n, unsigned int b)
{
    unsigned int overflow;
    overflow = n >> (size - b);

    return (n << b) | overflow;
}

char * itobstr(int n, char arr[])
{
    
    for (int i=size-1; i>=0; i--, n>>=1)
    {
        arr[i] = (01 & n) + '0';
    }

    arr[size] = '\0';

    return arr;
}

void run(unsigned int n, unsigned int b)
{
    // 跑马灯
    unsigned int r;
    char arr[size+1];
    while (1)
    {
        n = rotate(n, b);
        itobstr(n, arr);
        printf("%s\n", arr);
        sleep(1);   
    }
    

}



int main(int argc, char * argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Error Operation");
        exit(EXIT_FAILURE);
    }
    unsigned int n = atoi(argv[1]);
    unsigned int b = atoi(argv[2]);

    // unsigned int r;
    // r = rotate(n, b);

    // char arr[size+1];
    // char arr2[size+1];

    // itobstr(n, arr);
    // itobstr(r, arr2);


    // printf("%s rotate %d is %s\n", arr, b, arr2);
    run(n, b);

    return 0;
}