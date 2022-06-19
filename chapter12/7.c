#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>


int rollem(int side)
{
    int num;
    num = rand() % side + 1;
    return num;
}

int roll_n_dice(int side, int dice)
{
    int total=0;
    for (int i=0; i<dice; i++)
    {
        total += rollem(side);
    }

    return total;
}

void clear_input_buffer()
{
    while (getchar() != '\n')
    {
        continue;
    }
    
}

int main(void)
{
    int num_set;
    int side, dice;
    int ret[num_set];
    char ch[10];
    
    srand((unsigned int)time(0));

    printf("Enter the number of sets; enter q to stop: ");

    while (scanf("%d", &num_set) == 1)
    {
        // gets(ch);
        // if (ch[0] == 'q')
        // {
        //     break;
        // }
        // num_set = atoi(ch);
        // if (num_set == 0)
        // {
        //     continue;
        // }

        printf("How many sides and how many dice?");
        scanf("%d %d", &side, &dice);


        for (int i=0; i<num_set; i++)
        {
            ret[i] = roll_n_dice(side, dice);
        }

        for (int i=0; i<num_set; i++)
        {
            printf("%d ", ret[i]);
        }
        printf("\nEnter the number of sets; enter q to stop: ");

    }
    

    

    return 0;
}