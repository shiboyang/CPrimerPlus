#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"

#define MAXNAMES 41
#define PLAYER_FORMATE "%d %s %s %d %d %d"


typedef struct player
{
    int num;
    char firstname[MAXNAMES];
    char lastname[MAXNAMES];
    int match_time;
    int hit_time;
    int base_walk_time;
    int rbi;
}Player, *PPlayer;

char * playToString(PPlayer const pPlayer, char * dst)
{


    return dst;
}


void initPlayer(PPlayer pPlayer, const int lenght)
{
    int i = 0;
    while (i < lenght)
    {
        pPlayer->num = i;
        // strcpy("0", pPlayer->firstname);
        // strcpy("0", pPlayer->lastname);
        pPlayer->hit_time = 0;
        pPlayer->match_time = 0;
        pPlayer->base_walk_time = 0;
        pPlayer->rbi = 0;
        pPlayer++;
        i++;
    }
}
void showPlayer(PPlayer pPlayer, const int length)
{
    int i = 0;
    while (i < length)
    {
        printf("Player id: %d \n", pPlayer->num);
        printf("name: %s %s\n", pPlayer->firstname, pPlayer->lastname);
        printf("Hit times: %d\n", pPlayer->hit_time);
        printf("Match times: %d\n", pPlayer->match_time);
        printf("Base walk times: %d\n", pPlayer->base_walk_time);
        printf("RBI : %d\n", pPlayer->rbi);
        pPlayer++ ;
        i++;
        puts("\n");
    }
}

void inputData(char * path, PPlayer pPlayer)
{
    int player_num;
    printf("Enter the player id number: ");
    while (scanf("%d", &player_num) == 1)
    {
        PPlayer player = pPlayer + player_num;
        printf("Enter the other infomations: ");
        player->num = player_num;
        scanf("%s %s %d %d %d", player->firstname, player->lastname, &player->match_time,
        &player->hit_time, &player->base_walk_time);
        puts("Enter the next player id number: ");
        // skip char
        while (getchar() != '\n')
            continue;
    }    
}


void writeData(PPlayer pPlayer, int num, char * filename)
{
    FILE * fs;
    if ((fs = fopen(filename, "w")) == NULL)
    {
        printf("Can not open file: .%s", filename);
        exit(EXIT_FAILURE);
    }
    for (int i=0; i<num; i++)
    {
        Player player = *(pPlayer + i);
        fprintf(fs, "%d %s %s %d %d %d\n", player.num, player.firstname, player.lastname, 
        player.match_time, player.hit_time, player.base_walk_time);
    }
    fclose(fs);
}


void readData(char * path, PPlayer pPlayer)
{
    FILE * fs;
    if ((fs = fopen(path, "r")) == NULL)
    {
        printf("Can not open file: %s", path);
        exit(EXIT_FAILURE);
    }
    Player tmp;
    while (fscanf(fs, PLAYER_FORMATE, &tmp.num, tmp.firstname, 
                    tmp.lastname, &tmp.match_time, &tmp.hit_time, &tmp.base_walk_time) == 6)
    {
        PPlayer tmpPPlayer = pPlayer + tmp.num;
        strcpy(tmpPPlayer->firstname, tmp.firstname);
        strcpy(tmpPPlayer->lastname, tmp.lastname);
        tmpPPlayer->match_time += tmp.match_time;
        tmpPPlayer->hit_time += tmp.hit_time;
        tmpPPlayer->base_walk_time += tmp.base_walk_time;
        tmpPPlayer->rbi += tmp.rbi;
    }
    fclose(fs);
}


int main(void)
{
    const int MAXNUMS = 4;
    char filename[MAXNAMES] = "./Player.txt";
    char inputfile[MAXNAMES] = "./Plasanming";
    Player players[MAXNUMS];
    initPlayer(players, MAXNUMS);
    showPlayer(players, MAXNUMS);
    // inputData(filename, players);
    puts("======================================\n");
    readData(inputfile, players);
    showPlayer(players, MAXNUMS);
    writeData(players, MAXNUMS, filename);

    return 0;
}
