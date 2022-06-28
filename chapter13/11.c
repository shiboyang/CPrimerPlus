#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LLEN 256

int main(int argc, char * argv[])
{
    if (argc != 3)
    {
        puts("Argument error");
        exit(EXIT_FAILURE);
    }

    FILE * fp;
    char line[LLEN];

    if ((fp = fopen(argv[2], "r")) == NULL)
    {
        printf("Can not open file %s", argv[2]);
        exit(EXIT_FAILURE);
    }

    while (fgets(line, LLEN, fp) != NULL)
    {
        if (strstr(line, argv[1]) != NULL)
        {
            fputs(line, stdout);
        }
    }

    return 0;
}