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
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"


int main(int argc, char * argv[])
{

    FILE * fs, * fa;
    char source_filename[10], target_filename[10];

    if (argc < 3)
    {
        printf("Argument error");
        exit(EXIT_FAILURE);
    }


    fs = open(argv[1], "rb");
    fa = open(argv[2], "wb");
    file_copy(fs, fa);

    fclose(fs);
    fclose(fa);

    return 0;
}