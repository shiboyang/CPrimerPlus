#include <stdio.h>
#include "2.h"

extern int mode;
extern int distance;
extern float fuel;

void set_mode(int m)
{
    if (m == 0 || m == 1)
    {
        mode = m;
    }
    else
    {
        printf("Incorrect mode, auto select latest mode: %d\n", mode);
    }
}

void get_info()
{
    if (mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%d", &distance);
        printf("Enter fuel consumed in liters: ");
        
    }
    else
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%d", &distance);
        printf("Enter fuel consumed in miles: ");
    }
    scanf("%f", &fuel);
}

void show_info()
{
    if (mode == 0)
    {
        printf("Fuel consumption is %.2lf liters per 100 km\n", fuel/((float)distance/100));
    }
    else
    {
        printf("Fuel consumption is %.1lf miles per gallons\n", distance/fuel);
    }
}