#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void func6()
{
    const int size = 1000;
    int arr[size];
    int count[11] = {0};
    int index;

    for (int i=0; i < size; i++)
    {
        arr[i] = rand() % 10 + 1;
    }

    for (int i=0; i<size; i++)
    {
        index = arr[i];
        count[index]++;
    }
    for(int i=1; i<11; i++)
    {
        printf("%d count: %d\n", i, count[i]);
    }

    return ;

}
int main(void)
{
    int times = 10;
    srand((unsigned int)time(0));
    for (int i=0; i<times; i++)
    {
        func6();
        printf("*********%d*********\n", i);    
    }

    return 0;
}