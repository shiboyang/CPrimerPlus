#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#define BUFFSIZE 4096


void append(FILE * fs, FILE * fa)
{
    static char tmp[BUFFSIZE];
    size_t bytes;

    while ((bytes = fread(tmp, sizeof(char), BUFFSIZE, fa)) > 0)
    {
        fwrite(tmp, sizeof(char), bytes, fs);
    }
    
    return;
}


int main(int argc, char * argv[])
{
    FILE * fs, * fa;
    if (argc < 3)
    {
        puts("Arguemnt error");
        exit(EXIT_FAILURE);
    }

    fs = open(argv[1], "ab+");
    if (setvbuf(fs, NULL, _IOFBF, BUFFSIZE) != 0)
    {
        printf("Can not create output buffer \n");
        exit(EXIT_FAILURE);
    }

    for (int i=2; i<argc; i++)
    {
        fa = open(argv[i], "rb");
        if (setvbuf(fs, NULL, _IOFBF, BUFFSIZE) != 0)
        {
            printf("Can not create input buffer \n");
            exit(EXIT_FAILURE);
        }

        append(fs, fa);

        fclose(fa);
    }
    fclose(fs);

    return 0;
}