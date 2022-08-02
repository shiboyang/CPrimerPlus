#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#define SLEN CHAR_BIT * sizeof(int)

int main(int argc, char * argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Error Operation");
        exit(EXIT_FAILURE);
    }

    int num = atoi(argv[1]);
    int index = atoi(argv[2]);

    int rm_step = SLEN - index;
    num >>= rm_step;
    if ((num & 01) == 1)
        printf("1");
    else
        printf("0");

    return 0;
}