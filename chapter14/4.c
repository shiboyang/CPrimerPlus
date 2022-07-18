#include <stdio.h>


typedef struct 
{
    char lastname[31];
    char firstname[31];
    char middlename[31];

}PERSON;


typedef struct 
{
    int socal_num;
    PERSON user;
}SOCAL, * PSOCAL;

void shwo_struct_by_value(SOCAL s[], int size)
{
    for (int i=0; i < size; i++)
    {
        printf("%d\n %s\n %s\n %s", s[i].socal_num, s[i].user.firstname, s[i].user.middlename, s[i].user.lastname);
        printf("\n");
    }
}

void show_strcut_by_pointer(PSOCAL ps,  int size)
{
    for (int i=0; i < 3; i++)
    {
        printf("%d\n %s\n %s\n %s", ps->socal_num, ps->user.firstname, ps->user.middlename, ps->user.lastname);
        printf("\n");
        ps++;
    }
}



int main(void)
{

    SOCAL socal_list[3] = {
        {1234567890, {"shi", "yang", "bo"}},
        {1234567891, {"wang", "hua", "xiao"}},
        {1234567892, {"li", "min", "yi"}},
    };

    PSOCAL ps = socal_list;

    shwo_struct_by_value(socal_list, 3);
    printf("*******************************\n");
    show_strcut_by_pointer(socal_list, 3);

    return 0;
}


