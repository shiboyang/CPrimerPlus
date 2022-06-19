#include <stdio.h>

int main(void)
{
    // int arr[10] = {1,2,3,4,4,5};
    // printf("%p \n", arr);
    // printf("%p \n", &arr[0]);
    
    // int arr2[2][2];
    // printf("arr2 = %p \n", arr2);
    // printf("&arr2[0] = %p \n", &arr2[0]);
    // printf("&arr2[0][0] = %p \n", &arr2[0][0]);

    int * prt;
    int (*pprt) [2];
    int torf[2][2] = {12, 14, 16};
    prt = torf[0];
    pprt = torf[0];
    printf("%d, %d", *prt, pprt[1][1]);

    return 0;
}      