#include <stdio.h>

int main(void)
{
    char ch;

    ch = '\r';
    printf("%c", ch);

     ch = 13; 
    printf("%c", ch);

    ch = '\015';
    printf("%c", ch);

    ch = '\xd';
    printf("%c", ch);

    return 0;
}