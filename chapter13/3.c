#include <stdio.h>
#include "common.h"
#include <ctype.h>
// #include <string.h>
#define MAX_SIZE 1024



int main(void)
{
    char filename[10] = "4.txt";
    FILE * fp;


    // printf("Enter the filename: ");
    // scanf("%s", filename);
    // fp = open(filename, "r+");
    fp = fopen(filename, "r+");

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
    

    /**
     * @brief 这个题我不想写！
     * 
     */
    
    long tmp_ind = 0L;
    while(!feof(fp))
    {  
        fgets(tmp, MAX_SIZE, fp);
        tmp_ind = (long)(strlen(tmp)+1);
        current = ftell(fp);
        fseek(fp, current-tmp_ind, SEEK_SET);
        tmp[0] = 'X';
        fputs(tmp, fp);
        fseek(fp, current, SEEK_SET);            

    }  

    fclose(fp);

    return 0;
}