#include <stdio.h>
#include "4.h"

int main(void)
{
    int call_times = 0;
    for (int i = 0; i < 10; i++)
    {
        call_times = count_call();
        printf("Current time is %d, calltimes: %d\n", i, call_times);
    }
    
    return 0;
}