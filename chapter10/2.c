# include <stdio.h>
# include "common.h"
# define SIZE 5



void copy_arr(double target1[], const double source[], int length)
{
    for (int i=0; i<length; i++)
    {
        target1[i] = source[i];
    }
    return ;
}

void copy_ptr(double target2[], const double source[], int length)
{
    for (int i=0; i < length; i++, source++, target2++)
    {
        *target2 = *source;
    }
}

void copy_ptrs(double target3[], const double source[], double *source_end)
{
    while (source < source_end)
    {
        *target3 = *source;
        source++;
        target3++;
    }
    
}


int main(void)
{
    double source[SIZE];
    double target1[SIZE];
    double target2[SIZE];
    double target3[SIZE];

    init_double_array(source, SIZE);
    printf("source array: \n");
    show_double_array(source, SIZE);

    // printf("before: \n");
    // show_array(target1, SIZE);
    copy_arr(target1, source, SIZE);
    printf("target1 array: \n");
    show_double_array(target1, SIZE);

    copy_ptr(target2, source, SIZE);
    printf("target2 array: \n");
    show_double_array(target2, SIZE);


    copy_ptrs(target3, source, source+SIZE);
    printf("target3 array: \n");
    show_double_array(target3, SIZE);

    return 0;
}