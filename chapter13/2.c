#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"


int main(int argc, char * argv[])
{

    FILE * fs, * fa;
    char source_filename[10], target_filename[10];

    if (argc < 3)
    {
        printf("Argument error");
        exit(EXIT_FAILURE);
    }


    fs = open(argv[1], "rb");
    fa = open(argv[2], "wb");
    file_copy(fs, fa);

    fclose(fs);
    fclose(fa);

    return 0;
}