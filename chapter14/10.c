#include <stdio.h>
#include <stdlib.h>
#define size 3

int funca(void);
int funcb(void);
int funcc(void);


int main(void)
{
    char c;
    int (*pfunc[size]) (void) = {funca, funcb, funcc};

    puts("Select one's func");
    puts("a> funca\t\t b>funcb\nc>funcc");
    scanf("%c", &c);
    while (getchar()!='\n')
        continue;
    switch (c)
    {
        case 'a':
            pfunc[0]();
            break;
        case 'b':
            pfunc[1]();
            break;
        case 'c':
            pfunc[2]();
            break;
    }

    return 0;
}


int funca(void)
{
    puts("func a");
    return 0;
}

int funcb(void)
{
    puts("func b");
    return 1;
}


int funcc(void)
{
    puts("func c");
    return 2;
}
