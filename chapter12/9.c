#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void clear_intput_buffer()
{
    char ch;
    while ((ch  = getchar())!='\n')
    {
        printf("***=> %c\n", ch);
        continue;
    }
    
}

int main(void)
{
    int num_word;
    char *pt_arr[num_word];
    char string[100];
    char * pts = string;
    printf("How many words do you wish to enter? ");
    scanf("%d", &num_word);
    printf("Enter %d word now: \n", num_word);
    clear_intput_buffer();
    fgets(string, 100, stdin);

    int word_size=0;
    // bool start_flag = true;
    int i = 0;
    while (*pts)
    {
        if (*pts == '\0' || *pts == ' ' || *pts == '\n')
        {
            pt_arr[i] = (char *)malloc(word_size * sizeof(char) + 1);
            strncpy(pt_arr[i], pts-word_size, word_size);
            pt_arr[i][word_size] = '\0';
            i++;
            word_size = 0;
            pts++;
            continue;
        }

        word_size++;
        pts++;
   
    }

    for (int i=0; i<num_word; i++)
    {
        char * pts = pt_arr[i];
        puts(pts);
        free(pts);
    }


    return 0;
}