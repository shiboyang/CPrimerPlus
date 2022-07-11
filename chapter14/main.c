#include <stdio.h>



// 3
typedef struct date {
    char name[41];
    char abbr[4];
    unsigned int day;
    unsigned int month;
}Month;

// 4
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

// 5
int get_total_days(int month)
{
    int day = 0;
    for (int i = 0; i<12; i++)
    {
        if (month == Year[i].month)
        {
            day += Year[i].day;
            break;
        }
        else
            day += Year[i].day;
    }
}

// 11
enum choise {no, yes, maybe};

// 12
char * (* fp) (char * , char);

// 14

double a(double x, double y)
{
    return 1.0l;
}
double b(double x, double y)
{
    return 2.0l;
}
double c(double x, double y)
{
    return 3.0l;
}
double d(double x, double y)
{
    return 4.0l;
}

double (* func[4]) (double, double) = {a, b, c, d};
 


int main(void)
{
    // struct date myDate = {"July", "JUL", 31, 7};
    // int i = 0;
    // for (int i = 0; i<12; i++)
    // {
    //     printf("%s, %s, %d, %d\n", Year[i].name, Year[i].abbr, Year[i].day, Year[i].month);
    // }

    int year = 0;
    for (int y=1; y<=12; y++)
    {
        int total_dauy = get_total_days(y);
        printf("Up to %s total number days is %d\n", Year[y].name, total_dauy);
    }

    return 0;
}