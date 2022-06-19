#include <stdio.h>
#include <stdlib.h>

int * make_array(int elem, int val)
{
    int * ret;
    ret = (int *)malloc(elem * sizeof(int));
    for (int i=0; i<elem; i++)
    {
        ret[i] = val;
    }

    return ret;
}

void show_array(const int arr[], int elem)
{
    for(int i=0; i<elem; i++)
    {
        printf("%d ", arr[i]);
        if ((i+1) % 8 == 0)
            printf("\n");
    }
    printf("\n");
        
}


int main(void)
{
    int *pa;
    int size;
    int value;

    printf("Enter the number of elemenets: ");
    while (scanf("%d", &size) == 1 && size>0)
    {
        printf("Enter the initialization value: ");
        scanf("%d", &value);
        pa = make_array(size, value);
        if (pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements (<1 to quit): ");
    }

    printf("Done. \n");
    
    return 0;
}