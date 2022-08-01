#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "8.h"
#include "common.h"

#define PLANESIZE 4

typedef struct plane
{
    Data seat_list[seat_size];
    int plane;
}Plane, *PPlane;

void init_plane_list(Plane plane_list[], int length)
{
    int plane_num_list[PLANESIZE] = {102,311,444,519};
    for (int i=0; i<length; i++)
    {
        plane_list[i].plane = plane_num_list[i];
        init_plane_seat(plane_list[i].seat_list, seat_size);
    }
}

void select_menu(Plane plane_list[])
{
    int select;
    
    puts("102;311;444;519 Please select one of: (q to exit)");
    while (scanf("%d", &select)==1)
    {
        clean_line();
        switch (select)
        {
            case 102:
                interface(plane_list[0].seat_list, select);
                break;
            case 311:
                interface(plane_list[1].seat_list, select);
                break;
            case 444:
                interface(plane_list[2].seat_list, select);
                break;
            case 519:
                interface(plane_list[3].seat_list, select);
                break;
            default:
                puts("Type error, try again(q to quit)");
                break;
        }
        puts("102;311;444;519 Please select one of: (q to exit)");
    }
}

int main(void)
{
    Plane plane_list[PLANESIZE];
    init_plane_list(plane_list, PLANESIZE);
    select_menu(plane_list);   

    return 0;
}