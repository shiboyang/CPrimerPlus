# include <stdio.h>
# include "4.h"


int count_call()
{
    static int count = 0;
    printf("Count funcation is called!\n");
    count++;
    return count;
}