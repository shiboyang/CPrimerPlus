#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char filename[10];
    char ch;
    FILE * fp;
    int count = 0;

    printf("Enter the file name: ");
    scanf("%s", filename);

    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("Can not open the file %s", filename);
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
        if (ch != '\n' && ch != ' ' && ch != '\0')
        {
            count++;
        }
    }
    putchar('\n');
    fclose(fp);
    printf("The file %s count word is %d", filename, count);

    return 0;
}