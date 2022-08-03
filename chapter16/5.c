#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAXNUM 100

int * random_int_arr(int arr[], int length, int max_num)
{
    int t;
    srand((unsigned int) time(0));
    for (int i = 0; i < length; i++)
    {
        t = rand() % max_num;
        arr[i] = t;
    }
    

    return arr;
}


void show_list(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", arr[i]);
    }
    
}

int * lottery (int arr[], int length, int times, int res_arr[])
{

    int i=0;
    srand((unsigned int)time(0));
    while (i<times)
    {
        int index = rand()%length;
        int n = arr[index];
        for (int m=0; m<times; m++)
        {
            if (m >= i)
            {
                res_arr[m     ] = n;
                i++;
                break;
            }
            else if (n == res_arr[m])
            {
                break;
            }
            
        }
    }
    

    return res_arr;
}

int main(void)
{
    const int size = 10;
    const int times = 5;
    int arr[size];
    int res_arr[times];

    random_int_arr(arr, size, MAXNUM);
    show_list(arr, size);
    puts("------------------");

    lottery(arr, size, times, res_arr);
    show_list(res_arr, times);
    puts("------------------");


}