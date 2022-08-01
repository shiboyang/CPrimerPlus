#include <stdio.h>
#include <string.h>
#include "common.h"


char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(ret_val, '\n');
        if (find)
        {
            *find = '\0';;
        }
        else
        {
            while (getchar() != '\n')
                continue;   
        }
    }

    return ret_val;
}

void clean_line(void)
{   
    printf("clean line\n");
    while (getchar() != '\n')
        continue;    
}