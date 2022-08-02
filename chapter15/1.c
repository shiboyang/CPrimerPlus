#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "../chapter14/common.h"


int bstr2dec(char s[])
{
    int value = 0;

    while (*s != '\0')
    {
        value = value * 2 + (*s - '0');
        s++;
    }

    return value;
}



int main(void)
{
    const size_t Size = CHAR_BIT * sizeof(int) + 1;
    char s[Size];

    puts("Enter the string");
    s_gets(s, Size);
    int value = bstr2dec(s);
    printf("str: %s ==> %d\n", s, value);

    return 0;
}