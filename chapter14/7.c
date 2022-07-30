#include <stdio.h>
#include <stdlib.h>
#include "common.h"

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10

char filename[50] = "./books.bat";

typedef struct 
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
}BOOK, PBOOK;

int menu()
{
    int select;
    puts("1 Add \t 2 Modify\n3 Show \t 4 EXit&Save\n");
    while (scanf("%d", &select) != 1)
    {   
        puts("Input error\n re-select: ");
        while (getchar() != '\n')
            continue;        
    }
    return select;
}

int add(int count, BOOK library[])
{
    puts("Please add new book");
    while (count< MAXBKS && s_gets(library[count].title, MAXTITL) && library[count].title[0] != '\0')
    {
        puts("Enter the author: ");
        s_gets(library[count].author, MAXAUTL);
        puts("Enter the value: ");
        scanf("%f", &library[count].value);
        count++;
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            puts("Enter the next book.");
    }

    return count;
}

void modify(BOOK library[])
{
    int index;
    puts("Enter the index of book: ");
    while (scanf("%d", &index) != 1)
    {
        puts("Error input\n ");
        while (getchar() != '\n')
            continue;
    }
    while (getchar() != '\n')
            continue;
    puts("Enter the title: ");
    s_gets(library[index].title, MAXTITL);   
    puts("Enter the author: ");
    s_gets(library[index].author, MAXAUTL);
    puts("Enter the value: ");
    scanf("%f", &library[index].value);
     
}

void show(BOOK library[], int count)
{
    if (count > 0)
    {
        puts("BOOK LIST:");
        for (int i = 0; i < count; i++)
        {
            printf("(%d) %s by %s: %f\n", i, library[i].title, library[i].author, library[i].value);
        }
    }

}

void save(BOOK library[], int total, int file_count, FILE * pbook)
{
    size_t size = sizeof(BOOK);
    // fwrite(&library[file_count], size, total-file_count, pbook);
    rewind(pbook);
    fwrite(library, size, total, pbook);
}


int main(void)
{
    BOOK library[MAXBKS];
    int count = 0;
    FILE * pbook;
    size_t size = sizeof(BOOK); 


    if ((pbook = fopen(filename, "r+b")) == NULL)
    {
        printf("Can not open file: %s", filename);
        exit(EXIT_FAILURE);
    }


    rewind(pbook);
    while (count < MAXBKS && fread(&library[count], size, 1, pbook))
    {
        printf("(%d) %s by %s: %f\n", count, library[count].title, library[count].author, library[count].value);
        count++;
    }

    int file_count = count;
    
    int select;
    while ((select = menu()))
    {
        switch (select)
        {
            case 1:
                count = add(count, library);
                break;
            case 2:
                modify(library);
                break;
            case 3:
                show(library, count);
                break;
            case 4:
                save(library, count, file_count, pbook);
                break;
        }
        if (select == 4) break;
    }
    
    fclose(pbook);

    return 0;
}