#include <stdio.h>
#include <stdlib.h>

FILE * open(char *filename, char * mode)
{
    FILE * fs;
    if ((fs = fopen(filename, mode)) == NULL)
    {
        printf("Can not open file %s", filename);
        exit(EXIT_FAILURE);
    }

    return fs;
}

void file_copy(FILE * fs, FILE * fa)
{
    size_t bytes;
    const int MAX_SIZE = 1024;
    static char tmp[1024];

    while ((bytes = fread(tmp, sizeof(char), MAX_SIZE, fs)) > 0)
    {
        fwrite(tmp, sizeof(char), bytes, fa);
    }

    return;
}
