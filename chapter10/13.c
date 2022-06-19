#include <stdio.h>
#define COL 5


void user_input(double arr[][COL], int row)
{   
    for (int i=0; i<row; i++)
    {
        printf("Enter 5 double number: ");
        scanf("%lf %lf %lf %lf %lf", arr[i], arr[i]+1, arr[i]+2, arr[i]+3, arr[i]+4);
    }
}

double calculate_average(double arr[], int col)
{
    double total;
    for (int i=0; i<col; i++)
    {
        total += arr[i];
    }
    return total / col;
}

double calculate_arr_average(double arr[][COL], int row)
{
    double total;
    int n;
    for (int i=0; i<row; i++)
    {
        total += calculate_average(arr[i], COL);
        n += COL;
    }
    return total / n;
}

double max(double arr[][COL], int row)
{
    double max_num = **arr;
    for (int r=0; r<row; r++)
    {
        for (int c=0; c<COL; c++)
        {
            if (max_num < arr[r][c])
            {
                max_num = arr[r][c];
            }
        }
    }
    return max_num;
}

void shwo(int row, int col, double arr[row][col])
{
    for (int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            printf("%lf ", arr[r][c]);
        }
        printf("\n");
    }
}

int main(void)
{
    const int row = 3;
    double arr[3][COL];
    double average_num;
    user_input(arr, row);
    shwo(3, COL, arr);
    for (int i=0; i<row; i++)
    {
        average_num = calculate_average(arr[i], COL);
        printf("the %d row's average number is %lf \n", i, average_num);
    }

    printf("the all number of average is %lf\n", calculate_arr_average(arr, row));
    
    printf("the maximum is %lf", max(arr, row));

    return 0;
}