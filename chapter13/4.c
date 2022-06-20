#include <stdio.h>
#include <stdlib.h>
#include "common.h"


int main(int argc, char * argv[])
{
    FILE * fp;
    char ch;

    if (argc < 2)
    {
        puts("Argument error");
        exit(EXIT_FAILURE);
    }

    for (int i=1; i<argc; i++)
    {
        fp = open(argv[i], "r");
        printf("The file %s content is : \n", argv[i]);

        while ((ch = getc(fp)) != EOF)
        {
            putchar(ch);
        }

        putchar('\n');
        
    }

    
    return 0;
}