# include <stdio.h>

//3
int max(const int * arr, int length)
{
    int max = *arr;
    for (int i=0; i<length; i++)
    {
        if (max < *arr)
        {
            max = *arr;
        }

        arr++;
    }
    return max;
}





int main(void)
{
    int arr[10] = {2,34,6,67,2,124,45,6,7,8};
    const int size = 10;

    // for (int i=0; i<10; i++)
    // {
    //     arr[i] = i;
    // }

    int max_num = max(arr, size);
    
    
    printf("the maximum is %d", max_num);
    return 0;
}