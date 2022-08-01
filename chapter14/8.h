#ifndef _8_H
#define _8_H

#define seat_size 12
#define MAXNAMEL 41

enum seat_status {empty, taken};

typedef struct data
{
    int seat_num;
    enum seat_status status;
    char firstname[MAXNAMEL];
    char lastname[MAXNAMEL];
}Data, *PData;


void interface(Data*, int);
void show_selected_info(int);
void init_plane_seat(Data [], int);

#endif