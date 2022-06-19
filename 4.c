#include <stdio.h>
#include <string.h>
#include <limits.h>
#define PARISE "You are an extraordinary being."


int main(void)
{
    
    printf("size of: %zd, strlen: %zd \n", sizeof(PARISE), strlen(PARISE));
    printf("int max value is %d, and min value is %d\n", INT_MAX, INT_MIN);


    int a, b;
    a = INT_MAX;
    printf("%d \n", a);
    b = a + 1;
    printf("%d \n", b);

    printf("%2.2e", 22222.333);

    printf("enter your age: ");
    int age;
    scanf("%f", &age);
    printf("%d, %f", age, age);
    printf("\n");

    int c = 138;
    printf("%4X \n", c);
    printf("%d, %x", 0x8A, 0x8A);


    return 0;
}