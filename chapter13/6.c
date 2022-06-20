#include <stdio.h>
#include <string.h>
#include "common.h"
#define SLEN 40


int main(void)
{
    FILE * fin, * fout;
    char ch;
    char input_filename[SLEN];
    char output_filename[SLEN];
    int count = 0;


    printf("Enter the input filename: ");
    scanf("%s", input_filename);

    strcpy(output_filename, input_filename);
    char * tmp = strchr(output_filename, '.');
    if (tmp)
    {
        strcpy(tmp, ".red");
    }
    else
    {
        strcat(output_filename, ".red");
    }

    printf("%s", output_filename);

    fin = open(input_filename, "r");
    fout = open(output_filename, "w");

    while ((ch = getc(fin)) != EOF)
    {
        if (count % 3 == 0)
        {
            putc(ch, fout);
        }
        count++;
    }
    

    

    return 0;
}