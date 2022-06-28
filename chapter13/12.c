#include <stdio.h>
#include <stdlib.h>


void create_array_textfile(int row, int column, int num, FILE * fp)
{
    for (int r=0; r<row; r++)
    {
        for (int c=0; c<column; c++)
        {
            fprintf(fp, "%d ", num);
        }
        fputc('\n', fp);
    }
}


int main(void)
{   
    char filename[41] = "12test.txt";
    FILE * fp;
    const int row = 20;
    const int column = 30;
    char ch_arr[20][31];
    int int_arr[20][30];
    int num;
    char inplace_char[11] = "!@#$%^&*()";


    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("Can not open file %s", filename);
        exit(EXIT_FAILURE);
    }
    // create_array_textfile(20, 30, 0, fp);

    int i = 0;
    int r = 0, c = 0;
    while (fscanf(fp, "%d", &num)!=EOF)
    {  
        r = i / 30;
        c = i % 30;
        ch_arr[r][c] = inplace_char[num];
        i++;
    }

    for (int r=0; r<row; r++)
    {
        for (int c=0; c<column; c++)
        {
            putchar(ch_arr[r][c]);
        }
        putchar('\n');
    }
    
    



    return 0;
}