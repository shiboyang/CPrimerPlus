#include <stdio.h>
#include <stdlib.h>


int count_char(char ch, FILE * fp)
{
    char tmp;
    int count = 0;
    while ((tmp = getc(fp))!= EOF)
    {
        if (fp == stdin && tmp == '\n')
        {
            break;
        }

        if (tmp == ch)
        {
            count++;
        }
    }

    return count;
}


int main(int argc, char * argv[])
{
    char ch;
    FILE * fp;
    int count = 0;

    if (argc < 2)
    {
        puts("Argumnet error");
        exit(EXIT_FAILURE);
    }
    if (argc == 2)
    {
        fp = stdin;
        count = count_char(argv[1][0], fp);
        printf(" have %d %s\n", count, argv[1]);
    }
    else
    {
        for (int i=2; i<argc; i++)
        {
            if ((fp = fopen(argv[i], "r")) == NULL)
            {
                printf("%s file Can not open", argv[i]);
                continue;
            }

            count = count_char(argv[1][0], fp);
            printf("%s file have %d %s\n", argv[i], count, argv[1]);

        }
    }
    


    return 0;
}