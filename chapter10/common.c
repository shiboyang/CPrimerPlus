#include <stdio.h>

void init_double_array(double darr[], int length)
{
    for (int i=0; i < length; i++)
    {
        darr[i] = (double)i * 1.1;
    }
}

void show_double_array(double darr[], int length)
{
    for (int i=0; i < length; i++)
    {
        printf("%lf \n", darr[i]);
    }
}

void random_init_double_array(double darr[], int length)
{
    int arr[10] = {2,34,6,67,2,124,45,6,7,8};
    for (int i=0; i < length; i++)
    {
        darr[i] = (arr[i] * 1.1);
    }
}