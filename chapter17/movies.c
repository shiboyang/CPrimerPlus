#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"


char * s_gets(char * str, int size)
{
    char * ret_str;
    char * find;
    ret_str = fgets(str, size, stdin);
    if (ret_str)
    {
        find = strchr(str, '\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
}

void show_item(Item item)
{
    printf("film: %10s  rating: %d\n", item.title, item.rating);
}


int main(void)
{
    List movies;
    Item item;

    init_list(&movies);
    if (list_is_full(&movies))
    {
        fprintf(stderr, "malloc error");
        exit(EXIT_FAILURE);
    }

    puts("Enter ones film's name: ");
    while (s_gets(item.title, TITLELENS) && item.title[0] != '\0')
    {
        puts("Enter this movie's rating: ");
        scanf("%d", &item.rating);
        while (getchar()!='\n')
            continue;
        if (add_item(&movies, item) == false)
        {
            fprintf(stderr, "add item failed.\n");
            break;
        }

        if(list_is_full(&movies))
        {
            puts("this list is full");
            break;
        }

        printf("Currnet list contain %d film.\n", list_item_count(&movies));
        puts("Enter the next film name: ");
    }

    printf("this list contain %d film\n", list_item_count(&movies));

    puts("the movie's list:");
    traverse(&movies, show_item);

    empty_list(&movies);

    return 0;
}

