#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(void)
{   
    FILE * fp;
    char filename[41] = "12test.txt";
    int row_num = 0;
    int column_num = 0;
    char ch;
    char tmp_ch[256];

    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("Can not open file %s", filename);
        exit(EXIT_FAILURE);
    }

    int tmp_c = 0;
    while ((ch = getc(fp)) > 0)
    {
        if (ch == ' ')
        {
            tmp_c++;
            continue;
        }
        if (ch == '\n')
        {
            row_num++;
            if (tmp_c > column_num)
            {
                column_num = tmp_c;
            }
            tmp_c = 0;
            continue;
        }
    }
    column_num = 
    printf("row: %d, column: %d", row_num+1, column_num+1);
    

    return 0;
}

