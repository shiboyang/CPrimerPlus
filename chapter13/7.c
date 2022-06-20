#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common.h"
#define SLEN 256



int main(int argc, char * argv[])
{
    if (argc < 3)
    {
        puts("Arguemnt error");
        exit(EXIT_FAILURE);
    }

    FILE *file1, *file2;
    char tmp[SLEN];

    file1 = open(argv[1], "r");
    file2 = open(argv[2], "r");

    // fgets(tmp, SLEN, file1);
    // printf("%s", tmp);

    /**
     * 7.a
    while (1)
    {
        if (feof(file1) == 0)
        {
            fgets(tmp, SLEN, file1);
            fputs(tmp, stdout);
            if (!strchr(tmp, '\n'))
            {
                putchar('\n');
            }
            
        }
        if (feof(file2) == 0)
        {
            fgets(tmp, SLEN, file2);
            fputs(tmp, stdout);
            if (!strchr(tmp, '\n'))
            {
                putchar('\n');
            }
        }

        if (feof(file1) && feof(file2))
        { 
            break;
        }
    }

    */

   char tmp2[SLEN];
   char ch;
   char *ptch;
   while (1)
    {
        if (feof(file1) == 0)
        {
            fgets(tmp, SLEN, file1);
        }
        if (feof(file2) == 0)
        {
            fgets(tmp2, SLEN, file2);
        }

        strcat(tmp, tmp2);
        ptch = tmp;
        while (*ptch != '\0')
        {
            if (*ptch == '\n')
            {
                ptch++;
                continue;
            }
            putchar(*ptch);
            ptch++;
        }
        putchar('\n');

        if (feof(file1) && feof(file2))
        {
            break;
        }
    }

    fclose(file1);
    fclose(file2);
    


    return 0;
}