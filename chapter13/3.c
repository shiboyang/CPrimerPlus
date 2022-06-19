#include <stdio.h>
#include "common.h"
#include <ctype.h>
#include <string.h>
#define MAX_SIZE 1024



int main(void)
{
    char filename[10] = "4.txt";
    FILE * fp;


    // printf("Enter the filename: ");
    // scanf("%s", filename);
    fp = open(filename, "r+");

    char tmp[MAX_SIZE];
    char * tmp_fp;
    int bytes  = 0;
    long current = 0L;
    // fseek(fp, current, SEEK_SET);
    // current = ftell(fp);

    // while (fscanf(fp, "%s", tmp) == 1)
    // {
    //     // bytes = strlen(tmp);

    //     // tmp_fp = tmp;
    //     // while (*tmp_fp)
    //     // {
    //     //     *tmp_fp = toupper(*tmp_fp);
    //     //     tmp_fp++;
    //     // }

    //     // current = ftell(fp);
    //     // fseek(fp, current - (long)bytes, SEEK_SET);
        
    //     // fprintf(fp, "%s\n", tmp_fp);
    //    fputs(tmp, fp);
    // }
    
    

    while(!feof(fp))
    {  
        fgets(tmp, MAX_SIZE, fp);
        // tmp[0] = 'C';
        // puts(tmp);
        // fseek(fp, -3L, SEEK_CUR);
        // fputs(tmp, fp);
        // fseek(fp, 0L, SEEK_CUR);
        printf("%d\n", strlen(tmp));
        putc('C', fp);
    }  

    fclose(fp);

    return 0;
}