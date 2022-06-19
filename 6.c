#include <stdio.h>


void func1(void)
{
    const char A = 'a';
    char words[26];
    for (int i='a'; i<='z'; i++)
    {
        words[i-A] = i;
    }

    int i = 0;
    while (i<=26) 
    {
        printf("%c", words[i]);
        i++;
    }
    
    return ;
}


void func2(void)
{
    const int row_count = 5;
    for (int i=1; i <= row_count; i++)
    {
        for (int m=0; m<i; m++)
        {
            printf("$");
        }
        printf("\n");
    }
    return ;
}

void func3(void)
{
    const char bottom_word = 'F';
    for (int i=0; bottom_word-i >= 'A'; i++)
    {
        for (int m=0; m <= i; m++)
        {
            printf("%c", bottom_word-m);
        }
        printf("\n");
        
    }    
    return;
}



int main(void)
{
    func3();
    return 0;
}