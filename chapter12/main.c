#include <stdio.h>
#include <string.h>


char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;
    ret_val = fgets(ret_val, n, stdin);
    if (ret_val)
    {
        // while (*st != '\n' && *st != '\0')
        // {
        //     st++;
        // }
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }
        // if (*st == '\n')
        // {
        //      *st = '\0';
        // }
        else
        {
            while (getchar()!='\n')
            {
                continue;
            }
            
        }

    }

    return ret_val;
}


int my_strlen(char * pst)
{
    int length = 0;
    while (*pst)
    {
        length++;
        pst++;
    }

    return length;
}

char * get_null_pointer_in_str(char * pts)
{
    char * ret = NULL;
    ret = strchr(pts, ' ');
    return ret;
}


int main(void)
{
    // int arr[] = {1,2,3};

    // int * parr = arr;
    
    // printf("sizeof arr %zd\n", sizeof(arr));
    // printf("arr: %d, ++arr: %d\n", *arr, *(++parr));

  
    //       const char * pstr;
    // pstr = "xxxxxxxxx";               
    // // pstr[0] = 'c';
    // printf("%s\n", pstr);

    // char carr[] = pstr;
    // printf("%s\n", carr);

    // char * string = "ABC";
    // char arr[] = "BBC\0 CC";

    // printf("%d", strcmp(string, arr));


    // char string[] = "ABCDEFG";
    // char * pts;
    // pts = string;
    // while (*pts)
    // {
    //     putchar(*++pts);
    // }
    
    // printf("the \"%s \" length is %d", string, my_strlen(string));

    // char * str = "123abc";
    // str[0] = 'c';
    // puts(str);

    char str[10];
    fgets(str, 10, stdin);
    
    fputs(str, stdout);

    return 0;
}