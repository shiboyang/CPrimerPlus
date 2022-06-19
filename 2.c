// C 语言的基本模块是： 函数
// 语法错误 int a, int b ;
// 语义错误

#include <stdio.h>

int main(void)
{
    char a = '\a';
    int tmp;

    printf("          |");
    for (int i=0; i<10; ++i)
    {
        printf("\v |\n");
    }
    // printf("%c  warning", a);
    printf("Hello \007");

    printf("name: ____\b\b\b\b");
    
    printf("\a");

    return 0;
} 

