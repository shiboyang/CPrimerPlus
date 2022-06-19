#include <stdio.h>
#include <math.h>

// #define FORMATE "%s! C is cool!\n"

// void func7(void)
// {
//     char c1, c2;
//     int diff;
//     float num;

//     c1 = 'S';
//     c2 = 'O';
//     diff = c1 - c2;
//     num = diff;

//     printf("%c%c%c: %d %3.2f\n", c1, c2, c1, diff, num);

//     return;
// }

// #define TEN 10

// void func8(void)
// {
//     /*
//         while 的执行体如果没有使用block{}来表示, 那每次循环只会运行到下一个分号就结束了
//     */
//     int n = 0;
//     while (n++ < TEN)
//         printf("%5d", n);
//         printf("xxxxx\n");  // 循环只执行到上一个;结束, 这一行只会运行一次
    
//     return;
// }

// void func9(void)
// {
//     /*
//         打印a-g
//     */
//    int asc_a = (int)'a';
//    while (asc_a <= (int)'g')
//    {
//        printf("%c \n", asc_a);
//        asc_a++;
//    }
   
//     return ;
// }

// 5.11 编程练习
void func1(void)
{
    const int min_per_hour = 60;
    int minit, hour, inp_minit;
    printf("Enter Min value: ");
    scanf("%d", &inp_minit);
    while (inp_minit > 0)
    {
        minit = inp_minit % min_per_hour;
        hour = inp_minit / min_per_hour;
        printf("%d minit is %d hour %d minit\n", inp_minit, hour, minit);
        printf("go on! minit: ");
        scanf("%d", &inp_minit);
    }

    printf("close!");
    return ;
}

void func2(void)
{
    int x1, x2;
    printf("enter a number: ");
    scanf("%d", &x1);
    x2 = x1;
    while (x2 <= x1 + 10 )
    {
        printf("%d \n", x2);
        x2++;
    }
    
    return;

}

void func3(void)
{
    const int day_per_week = 7;
    int input_day, week, day;
    printf("enter a number of day: ");
    scanf("%d", &input_day);
    week = input_day / day_per_week;
    day = input_day % day_per_week;
    printf("%d days are %d weeks, %d days", input_day, week, day);
    return;
}

void func4(void)
{
    //有问题
    float height, feet, inches;
    const float cm_per_feet = 30.48;
    const float cm_per_inches = 2.54;
    printf("Enter your Height: ");
    scanf("%f", &height);
    while (height > 0)
    {
        feet = height / cm_per_feet;
        inches = height -(feet * cm_per_feet)/ cm_per_inches;
        printf("%.1f cm = %f feet, %.1f inches\n", height, feet, inches);
        printf("next height: ");
        scanf("%f", &height);
    }
    
    return;
}

void func5(void)
{
    int data=0, total=0;
    scanf("%d", &data);
    for (int i=0; i<=data; ++i)
    {
        total += i;
    }
    printf("total money is %d", total);
    return;
}

void func6(void)
{
    int data=0, total=0;
    scanf("%d", &data);
    for (int i=0; i<=data; ++i)
    {
        total += i * i; // pow(i, 2)
    }
    printf("total money is %d", total);
    return;
}

void func7(double num)
{
    printf("%lf", pow(num, 3));
    return;
}
void func7_main()
{
    double x;
    printf("Enter a double type number: ");
    scanf("%lf", &x);
    func7(x);
}

void func8(void)
{
    int a, b;
    printf("enter an integer to serve as the second operand: ");
    scanf("%d", &b);
    while (b > 0)
    {
        printf("enter the first operand: ");
        scanf("%d", &a);
        printf("%d %% %d is %d \n", a, b, a%b);
        printf("enter an integer to serve as the second operand: ");
        scanf("%d", &b);
    }
    printf("done");
    
    return;
}

void Temperatures(double t)
{
    float centigrade, kelvin;
    const float cent_bias = 32.0;
    const float kelv_bias = 273.16;
    centigrade = 5.0 / 9.0 * (t - cent_bias);
    kelvin = centigrade + kelv_bias;
    printf("cels: %.2lf, centigrade: %.2f, kelvin: %.2f \n", t, centigrade, kelvin);
}

void func9(void)
{
    double temp;
    while (scanf("%lf", &temp) == 1)
    {
        Temperatures(temp);
    }

    return;
}


int main(void)
{

    // printf("sizeof char %zd \n", sizeof(char));
    // printf("sizeof int %zd \n", sizeof(int));
    // printf("sizeof float %zd \n", sizeof(float));
    // printf("sizeof double %zd \n", sizeof(double));


    // int x = (int)3.8 + 3.3;
    // x = (2 + 3) * 10.5;
    // printf("%d", x);

    // printf(FORMATE, FORMATE);
    // // func8();
    // int x = 100;
    // while (++x < 103)
    // {
    //     printf("%4d\n", x);
    //     printf("%4d\n", x);

    // }
    
    // func1();
    func9();
    return 0;
}