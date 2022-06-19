#include <stdio.h>


void critic(int * pti)
{
    puts("Unlick Try again!");
    scanf("%d", pti);
}


int main(void)
{
    int units = 0;
    puts("How many pounds to a firkin of butter?");
    scanf("%d", &units);
    while (units != 56)
    {
        critic(&units);
    }
    printf("You must have looked it up!\n");
    
    return 0;
}