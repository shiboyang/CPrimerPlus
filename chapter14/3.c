#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS  100



typedef struct
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
}BOOK, *PBOOK;

int compar_value(const void * pb1, const void * pb2)
{
    PBOOK b1 = (PBOOK) pb1;
    PBOOK b2 = (PBOOK) pb2;
    int d = b2->value - b1->value;
    return d * -1;
}

int compar_title(const void * pb1, const void * pb2)
{
    PBOOK b1 = (PBOOK) pb1;
    PBOOK b2 = (PBOOK) pb2;
    return strcmp(b1->title, b2->title);
}


int main(void)
{
    BOOK library[MAXBKS];
    int count = 0;
    puts("Please enter the book title.");
    while (s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
    {
        printf("Enter author: \n");
        scanf("%s", library[count].author);
        printf("Enter value: \n");
        scanf("%f", &library[count].value);

        while (getchar() != '\n')
            continue;
        
        if (count < MAXBKS)
        {
            printf("Enter next book.\n");
        }
        else
        {
            break;
        }
        count++;   
    }

    if (count > 0)
    {
        printf("Sort before: \n");
        for (int i=0; i < count; i++)
        {
            printf("%s %s %f\n", library[i].title, library[i].author, library[i].value);
        }

        printf("Output by title: \n");
        qsort(library, count, sizeof(BOOK), compar_title);
        for (int i=0; i < count; i++)
        {
            printf("%s %s %f\n", library[i].title, library[i].author, library[i].value);
        }

        printf("output by value: \n");
        qsort(library, count, sizeof(BOOK), compar_value);
        for (int i=0; i < count; i++)
        {
            printf("%s %s %f\n", library[i].title, library[i].author, library[i].value);
        }
    }

    printf("End");

    return 0;
}

