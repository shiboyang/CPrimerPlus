#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define FNLEN 41

int main(void)
{
    char filename[FNLEN];
    int index;
    FILE * fp;
    char ch;

    puts("Enter the filename: ");
    scanf("%s", filename);

    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("Can not open the file %s", filename);
        exit(EXIT_FAILURE);
    }

    puts("Enter the index: ");
    while (scanf("%d", &index) == 1)
    {
        if (index<0)
        {
            break;
        }

        fseek(fp, (long)index, SEEK_SET);
        while ((ch = getc(fp)) != EOF && ch != '\n')
        {
            putchar(ch);
        }
        puts("\nNext index is : ");
    }


    return 0;
}