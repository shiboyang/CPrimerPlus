#include <stdio.h>
#include "common.h"

//4
int find_max_index_in_double_arr(double arr[], int length)
{
    int index=0;
    int max = *arr;
    for (int i=0; i<length; i++)
    {
        if (max < arr[i])
        {
            index = i;
            max = arr[i];
        }
    }
    return index;
}

//5 
double calcualte_diff_in_max_and_min(double arr[], int lenght)
{
    double max = *arr, min = *arr;
    for (int i=0; i<lenght; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return max - min;
}

//6
void reverse_double_arrry(double arr[], int length)
{
    double t;
    for (int i=0; i<length/2; i++)
    {
        t = arr[i];
        arr[i] = arr[length-i];
        arr[length-i] = t;
    }
}



int main(void)
{
    const int size = 10;
    double arr[size];
    random_init_double_array(arr, size);
    
    int max_index = find_max_index_in_double_arr(arr, size);
    show_double_array(arr, size);
    printf("the maxmuim's index is %d \n", max_index);


    double diff_val = calcualte_diff_in_max_and_min(arr, size);
    printf("the different value is %lf \n", diff_val);


    init_double_array(arr, size);
    reverse_double_arrry(arr, size);
    show_double_array(arr, size);

    return 0;
}