#include <stdio.h>
#include "2.h"


int main(void)
{
    int mode;

    printf("Enter 0 for meteric mode, 1for US mode: ");
    scanf("%d", &mode);
    while (mode >= 0)
    {
        set_mode(mode);
        get_info();
        show_info();
        
        printf("Enter 0 for meteric mode, 1for US mode: ");
        printf(" (-1 to quit): ");
        scanf("%d", &mode);
    }
    
    printf("Done. \n");
    return 0;
}