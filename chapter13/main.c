#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 4
// int main(int argc, char * argv [])
// {
//     int count = 0;
//     float value;
//     float total = 0.0f;
//     FILE * fp;

//     if (argc == 1)
//     {
//         fp = stdin;
//     }
//     else if (argc == 2)
//     {
//         if ((fp = fopen(argv[1], "r")) == NULL)
//         {
//             printf("Can not open file %s", argv[1]);
//             exit(EXIT_FAILURE);
//         }
//     }
    

//     while (fscanf(fp, "%f", &value) == 1)
//     {
//         total += value;
//         count++;
//     }
        


//     printf("average is %lf", total/count);

//     return 0;
// }

// 5
// int main(int argc, char * argv[])
// {
//     if (argc < 3)
//     {
//         puts("argument error");
//         exit(EXIT_FAILURE);
//     }

//     char ch;
//     const int MAX_CHAR = 256;
//     char line[256];
//     FILE * fp;

//     ch = argv[1][0];
//     if ((fp = fopen(argv[2], "r")) == NULL)
//     {
//         printf("Can not open file %s\n", argv[2]);
//         exit(EXIT_FAILURE);
//     }
    
//     while (fgets(line, MAX_CHAR, fp) != NULL)
//     {
//         if (strchr(line, ch))
//         {
//             fputs(line, stdout);
//         }        
//     }
//     fclose(fp);

//     return 0;
// }

//6
/**
 * @brief 二进制文本和文本文件之间的区别
 * 如果文件以二进制编码的字符保存就是文件文件
 * 如果文件以二进制值表示机器语言代码或数值数据就是二进制文件
 * 文本流需要程序进行转换。二进制流不需要程序转换
 */

//7
/**
 * @brief
 * fwrite 将8238201保存成一个四字节的int类型保存在文件中
 * fprintf 将数字转换成7个字符保存在7个字节中
 * 2.没有区别
 */

int main(void)
{
    FILE * fp;
    char filename[10] = "test.txt";
    fp = fopen(filename, "w");
    fprintf(fp, "%s", "8238201");
    fclose(fp);

    fp = fopen("fwrite.txt", "wb");
    int num = 8238201;
    fwrite(&num, sizeof(int), 1, fp);
    fclose(fp);

    return 0;
}

//9
/**
 * @brief 
 * 以更新模式打开文件：如果文件已存在直接打开，如果文件不存在则新建文件
 * a+ 以更新模式打开文件，在文件末尾追加内容，可以读整个文件，只能在文件末尾添加新的内容
 * w+ 以更新模式打开文件，清空原来的内容，从文件开头处写入新的内容
 * r+ 以更新模式打开文件，对文件的整个内容可读可写
 */
