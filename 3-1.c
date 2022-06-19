#include <stdio.h>
#include <math.h>



void func1(void)
{
    /*
        测试整数上溢 
        unsigned short int 
        
        值域       max     二进制数
        0-65535   65535   11111111 11111111
        浮点数 上溢 下溢
    */
   unsigned short int si_a, si_b;
   printf("%d %lf\n", sizeof(si_a), pow(2, 16));
   si_a = 65535;
   si_b = si_a + 1;
   printf("%d + 1 = %d \n", si_a, si_b);
   float f_a = 0.1e-32;
   
   float f_b, f_c;
   f_b = f_a - 1;
   printf("%f - 1 = %f \n", f_a, f_b);
   f_c = f_a + 1;
   printf("%f + 1 = %f \n", f_a, f_c);
}

void func2()
{
    /*
        输入一个ascll码值 打印输入的字符
    */
   int input;
   printf("Please input ascll value: ");
   scanf("%d", &input);
   printf("user input value's ascll: %d convert to char %c", input, input);
}


void func3()
{
    /*
        编写一个程序发出警报，然后打印两行文本
    */
   printf("\a");
   printf("first text \n\"second text, content \" text\" ");
}

void func4(void)
{
    /*
         读取一个浮点数 先打印成小数点形式 再打印成指数形式 
         如果系统支持 再尝试打印p计数法(16进制记数法)
    */
   float a;
   printf("Please input float type number: ");
   scanf("%f", &a);
   printf("%f \n", a);
   printf("%e \n", a);
   printf("%a \n", a);
}

void func5(void)
{
    float one_year_second = 3.156e7;
    int age;

    printf("Please input your age: ");
    scanf("%d", &age);
    printf("%e", age*one_year_second);
}

void func6(void)
{
    double water_kg = 3.0e-32;
    int factor = 950;
    int kw_water;
    printf("Please input water kw: ");
    scanf("%d", &kw_water);
    printf("%f", kw_water * factor / water_kg);
}

void func7(void)
{
    /*
        一英寸相当于2.54厘米
    */
   float factor = 2.54;
   float height;
   printf("Please enter your heigth(inch): ");
   scanf("%f", &height);
   printf("%f cm", height * factor);
}


void func8(void)
{
    /*
        1品脱 = 2杯
        1杯 = 8盎司
        1盎司 = 2汤勺
        1汤勺 = 3茶勺
    */
    int glass_count;
    float pt, as, ts, cs;
    printf("Please enter how mang glass: ");
    scanf("%d", &glass_count);
    pt =  0.5 * glass_count;
    as = 8 * glass_count;
    ts = as * 2;
    cs  = ts * 3;
    printf("pt: %f \nas: %f \nts: %f \ncs: %f", pt, as, ts, cs);

}

int main(void)
{
    func8();
    getchar();
    return 0;
}