#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include <string.h>



struct name
{
    char last_name[41];
    char first_name[41];
};

struct student
{
    struct name name;
    float grade[3];
    float avg_grade;
};


int main(void)
{
    const int CSZIE = 4;
    int count = 0;
    struct student students[CSZIE];
    printf("Enter a student infomation: ");
    char name[41];
    while (s_gets(name, 41) != NULL && name[0] != '\0')
    {
        strcmp(name, students[count].name.first_name);
        puts("Enter the last name: ");
        scanf("%s", students[count].name.last_name);
        puts("Enter the grades: ");
        scanf("%f %f %f", &students[count].grade[0], &students[count].grade[1], &students[count].grade[2]);
        students[count].avg_grade = (students[count].grade[0] + students[count].grade[1]+ students[count].grade[2]) / 3;
        count++;
        while (getchar() != '\n')
            continue;
    }

    float avg_garde = 0.0f;

    for (int i = 0; i < count; i++)
    {
        printf("%s %s\n", students[i].name.first_name, students[i].name.last_name);
        printf("garde: %f, %f, %f\n", students[i].grade[0],students[i].grade[1], students[i].grade[2]);
        printf("avg garde: %f\n", students[i].avg_grade);
        avg_garde += students[i].avg_grade;
    }

    printf("class avgerage garde is %f", avg_garde/count);
    
    
    return 0;
}
