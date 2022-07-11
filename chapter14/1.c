#include <stdio.h>
#include <string.h>

// 3
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
    char intput[41];
    puts("Enter a month: ");
    scanf("%s", intput);
    int day = 0;
    for (int i=0; i<12; i++)
    {
        if (strcmp(intput, Year[i].name) == 0)
        {
            day += Year[i].day;
            break;
        }
        else
            day += Year[i].day;
    }

    printf("Up to %s the total days is %d", intput, day);
    return 0;
}