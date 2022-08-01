#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"
#include "8.h"


void show_menu();
int get_empty_seat_num(Data[], int);
void show_empty_seat_num(Data [], int);
void show_empty_seat_list(Data[], int);
void show_empty_seat_list_order(Data[], int);
void set_customer_to_seat(Data[], int);
void delete_customer(Data[], int);

/*
int main(void)
{
    Data plane_seat[seat_size];
    init_plane_seat(plane_seat, seat_size);
    show_menu();
    char sel;
    while (scanf("%c", &sel)==1)
    {
        clean_line();
        switch (sel)
        {
            case 'a':
                show_empty_seat_num(plane_seat, seat_size);
                break;
            case 'b':
                show_empty_seat_list(plane_seat, seat_size);
                break;
            case 'c':
                show_empty_seat_list_order(plane_seat, seat_size);
                break;
            case 'd':
                set_customer_to_seat(plane_seat, seat_size);
                break;
            case 'e':
                delete_customer(plane_seat, seat_size);
                break;
            case 'f':
                exit(EXIT_SUCCESS);
        }
        show_menu();
    }
    return 0;
}
*/

void init_plane_seat(Data seat_list[], int lenght)
{
    for (int i=0; i<lenght;  i++)
    {
        seat_list[i].seat_num = i;
        seat_list[i].status = empty;
        strcmp("", seat_list[i].firstname);
        strcmp("", seat_list[i].lastname);
    }
}

void show_menu()
{
    puts("-----------------------------------------------");
    puts("To choose a function, enter its letter label:");
    puts("a) Show number of empty seats");
    puts("b) Show list of empty seats");
    puts("c) Show alphabetical list of seats");
    puts("d) Assign a customer to a seat assignment");
    puts("e) Delete a seat assignment");
    puts("f) Quit");
    puts("-----------------------------------------------");
}

int get_empty_seat_num(Data seat_list[], int length)
{
    int total = 0;
    for (int i=0; i<length; i++)
    {
        if (seat_list[i].status == empty)
        {
            total++;
        }
    }
    return total;
}

void show_empty_seat_num(Data seat_list[], int length)
{
    printf("The number of empty seat in this plane is %d\n", get_empty_seat_num(seat_list, length));
}
void show_empty_seat_list(Data seat_list[], int length)
{
    for (int i=0; i<length; i++)
    {
        if (seat_list[i].status == empty)
        {
            printf("Seat num: %d, status: empty\n", seat_list[i].seat_num);
        }
    }
}

void show_empty_seat_list_order(Data seat_list[], int length)
{
    for (int i=0; i<length; i++)
    {
        printf("The seat num: %d\t status: %d\tuser:%s %s\n", seat_list[i].seat_num,
        seat_list[i].status, seat_list[i].firstname,seat_list[i].lastname);
    }
}

void set_customer_to_seat(Data seat_list[], int length)
{
    int seat_num;
    show_empty_seat_list(seat_list, seat_size);
    puts("Enter your favorite seat num(enter q exit):");
    while (scanf("%d", &seat_num) == 1)
    {
        if (seat_num >= 0 && seat_num < seat_size)
        {
            clean_line();
            if (seat_list[seat_num].status == empty)
            {
                seat_list[seat_num].status = taken;
                puts("Enter the customer firstname: ");
                fgets(seat_list[seat_num].firstname, MAXNAMEL, stdin);
                puts("Enter the customer lastname: ");
                fgets(seat_list[seat_num].lastname, MAXNAMEL, stdin);
                break;
            }
            else
            {
                puts("Only select empty seat.");
            }
        }
        else
            puts("Type error; Enter again!");
    }
}

void delete_customer(Data seat_list[], int length)
{
    int seat_num;
    int empty_num = get_empty_seat_num(seat_list, length);
    if (empty_num < seat_size)
    {
        
        puts("Enter you want to delete seat num: ");
        while (scanf("%d", &seat_num) == 1)
        {
            if (seat_num>=0 && seat_num<seat_size)
            {
                if (seat_list[seat_num].status == taken)
                {
                    seat_list[seat_num].status = empty;
                    strcmp("", seat_list[seat_num].firstname);
                    strcmp("", seat_list[seat_num].lastname);
                    break;
                }
                else
                {
                    puts("Empty seat can not delete.");
                    puts("You can type this nums: ");
                    for (int i=0; i<length; i++)
                    {
                        if (seat_list[i].status==taken)
                            printf("%d ", i);
                    }
                    puts("");
                }
            }
            else
                puts("Type error, try again!");
        }
    }
    else
    {
        puts("NO seat to delete.");
    }

}

void show_selected_info(int  select)
{
    printf("Current select plane number is %d\n", select);
}

void interface(Data seat_list[], int select)
{
    char sel;
    show_menu();
    while (scanf("%c", &sel)==1)
    {
        clean_line();
        switch (sel)
        {
            case 'a':
                show_selected_info(select);
                show_empty_seat_num(seat_list, seat_size);
                break;
            case 'b':
                show_selected_info(select);
                show_empty_seat_list(seat_list, seat_size);
                break;
            case 'c':
                show_selected_info(select);
                show_empty_seat_list_order(seat_list, seat_size);
                break;
            case 'd':
                show_selected_info(select);
                set_customer_to_seat(seat_list, seat_size);
                break;
            case 'e':
                show_selected_info(select);
                delete_customer(seat_list, seat_size);
                break;
            case 'f':
                return;
        }
        show_menu();
    }
}