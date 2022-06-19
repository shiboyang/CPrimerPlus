#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort_intarr(int arr[], int length)
{
    int tmp;
    for (int top=0; top < length; top++)
    {
        for (int seek=top; seek < length; seek++)
        {
            if (arr[top]<arr[seek])
            {
                tmp = arr[top];
                arr[top] = arr[seek];
                arr[seek] = tmp;
            }
        }
    }
}


int main(void)
{
    const int size = 100;
    int arr[size];
    int num;
    srand((unsigned int)time(0));
    for (int i=0; i<size; i++)
    {
        arr[i] = rand() % 10 +1;
    }

    sort_intarr(arr, size);

    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
   
}