# include <stdio.h>
# include "common.h"

void copy_arr(double target1[], const double source[], int length)
{
    for (int i=0; i<length; i++)
    {
        target1[i] = source[i];
    }
    return ;
}

// 7
void copy_double_dim_arr(double target1[][3], double source[][3], int row)
{
    int clo = 3;
    for (int i=0; i<row; i++)
    {
        copy_arr(target1[i], source[i], clo);
    }
}

void show_double_dim_arr(double arr[][3], int row)
{
    for (int i=0; i<row; i++)
    {
        show_double_array(arr[i], 3);
    }
}


// 8
void func8(void)
{
    const int size = 7;
    double arr[size], target[3];
    init_double_array(arr, size);
    copy_arr(target, arr+2, 3);
    show_double_array(target, 3);
}

void copy_2d(int row, int col, double arr[row][col], double target[][5])
{
    for (int r=0; r<row; r++)
    {
        for (int c=0; c<col; c++)
        {
            target[r][c] = arr[r][c];
        }
    }
}
void show_2d(int row, int col, double arr[row][col])
{
    for (int r=0; r<row; r++)
    {
        for (int c=0; c<col; c++)
        {
            printf("%lf \n", arr[r][c]);
        }
    }
}

//9
void func9(void)
{
    double arr[3][5] = {{1.1f,2.2f,3.3f,4.4f,5.5f},{1.1,2.2,3.3,4.4,5.5},{1.1,2.2,3.3,4.4,5.5}};
    double target[3][5];
    copy_2d(3, 5, arr, target);
    show_2d(3, 5, target);
}



// 10
void func10(const int arr1[], const int arr2[], int arr3[], int length)
{
    
    for (int i=0; i<10; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }


    for (int i=0; i<10; i++)
    {
        printf("%d ", arr3[i]);
    }

    return;
}


// 11
void double_2d(int arr[][5], int row)
{
    for (int i=0; i<row; i++)
    {
        for (int c=0; c<5; c++)
        {
            arr[i][c] *= 2;
        }
    }
}

void show_func11(int arr[][5], int row)
{
    for (int i=0; i<row; i++)
        {
            for (int c=0; c<5; c++)
            {
                printf("%d ", arr[i][c]);
            }
        }
}



void func11(void)
{   
    const int row = 3;
    int arr[3][5] = {{1,2,3,4,6},{1,2,3,4,6},{1,2,3,4,6}};
    printf("Original array: \n");
    show_func11(arr, row);
    printf("\n");
    double_2d(arr, row);
    printf("Double array element: \n");
    show_func11(arr, row);
}


int main(void)
{
    // double arr1[3][3] = {{1.0f, 2.0f, 3.0f}, {1.0f, 2.0f, 3.0f}, {1.0f, 2.0f, 3.0f}};
    // double arr2[3][3];

    // copy_double_dim_arr(arr2, arr1, 3);

    // show_double_dim_arr(arr2, 3);

    // func8();

    // func9();

    // const int size = 10;
    // int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    // int arr2[10] = {2,3,4,5,6,7,8,9,10,11};
    // int arr3[size];
    // func10(arr1, arr2, arr3, size);

    func11();

    return 0;
}