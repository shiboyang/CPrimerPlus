#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SLEN 41

int main(void)
{   
    char filename[SLEN];
    FILE * fp;
    int count = 0;
    char line[1024];
    char word[1024];

    puts("Enter filename: ");
    scanf("%s", filename);

    if ((fp = fopen(filename, "a+")) == NULL)
    {
        printf("Can not open file %s", filename);
        exit(EXIT_FAILURE);
    }
    fseek(fp, 0L, SEEK_SET);

    while ((fgets(line, 1024, fp)) != NULL)
    {
        if (strchr(line, '\n'))
        {
            count++;
        }
    }
    printf("The file have %d lines content\n", count);
    puts("Enter word to add to the file");
    while ((fscanf(stdin, "%s", word)) == 1 && word[0] != '#')
    {
        fprintf(fp, "%d %s\n", ++count, word);
    }

    return 0;
}