#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define size CHAR_BIT * sizeof(int) + 1

int bstr2dec(char arr[])
{
    int value = 0;
    while (*arr!='\0')
    {
        value = value * 2 + (*arr - '0');
        arr++;
    }

    return value;
}

char * itobstr(int n, char arr[])
{
    

    for (int i=size-1; i>0; i--, n>>=1)
    {
        arr[i] = (01 & n) + '0';
    }

    arr[size] = '\0';

    return arr;
}


int main(int argc, char * argv[])
{

    if (argc != 3)
    {
        fprintf(stderr, "Use error\n");
        exit(EXIT_FAILURE);
    }

    int a = bstr2dec(argv[1]);
    int b = bstr2dec(argv[2]);

    printf("the first number is %d\n", a);
    printf("the second number is %d\n", b);

    char arr[size];
    printf("%s ~==> %s\n", argv[1], itobstr(~a, arr));
    printf("%s & %s ==> %s\n", argv[1], argv[2], itobstr(a&b, arr));
    printf("%s | %s ==> %s\n", argv[1], argv[2], itobstr(a|b, arr));
    printf("%s ^ %s ==> %s\n", argv[1], argv[2], itobstr(a^b, arr));

    return 0;
}