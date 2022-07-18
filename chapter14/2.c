#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct date {
    char name[41];
    char abbr[4];
    unsigned int day;
    unsigned int month;
}Month;

Month Year[12] = {
    {"January", "JAN", 31, 1},
    {"February", "FEB", 28, 2},
    {"March", "MAR", 31, 3},
    {"April", "APR", 30, 4},
    {"May", "MAY", 31, 5},
    {"June", "JUN", 30, 6},
    {"July", "JUL", 31, 7},
    {"August", "AUG", 31, 8},
    {"September", "SEP", 30, 9},
    {"October", "OCT", 31, 10},
    {"Novenber", "NOV", 30, 11},
    {"December", "DEC", 31, 12},
    };


int main(void)
{
    int year, day;
    char month[41];
    int total = 0;
    printf("Enter year month day: (quit to q)");
    while(scanf("%d %s %d", &year, month, &day) == 3)
    {
        for (int i=0; i < 12; i++)
        {
            if (strlen(month) <= 2)
            {
                int m = atoi(month);
                if (m == Year[i].month)
                {
                    total += day;
                    break;
                }
                else
                {
                    total += Year[i].day;
                }

            }
            else
            {
                if ((strcmp(Year[i].name, month)==0) || (strcmp(Year[i].abbr, month)==0))
                {
                    total += day;
                    break;
                }
                else
                {
                    total += Year[i].day;
                }
            }
        }
        printf("the total number day is : %d\n", total);
        total = 0;
        printf("Enter date: (quit to q)");
    }


    return 0;
}