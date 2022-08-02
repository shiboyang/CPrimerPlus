#include <stdio.h>
#include <limits.h>
#define SLEN CHAR_BIT * sizeof(int) + 1

int main(void)
{
    int num;
    puts("Enter some number: ");
    scanf("%d", &num);

    int n = 0;
    for (int i=SLEN-1; i>0; i--, num>>=1)
    {
        if ((01 & num) == 1)
        {
            n++;
        }
    }
    printf("the number of have opened bit is %d\n", n);

    return 0;
}