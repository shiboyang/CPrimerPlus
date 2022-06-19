# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <math.h>
# include "9.h"

double min(double a, double b)
{
    return (a <= b) ? a : b;
}

void chline(char ch, int i, int j)
{
    for (int x=0; x <= j; x++)
    {
        for (int y=0; y < i; y++)
        {
            printf("%c", ch);
        }
        printf("\n");

    }
}

double func4(double a, double b)
{
    double res;
    a /= 1;
    b /= 1;
    res = (a + b) / 2;
    res /= 1;

    return res;
}


void larger_of(double * a, double * b)
{
    if (*a > *b)
    {
        *b = *a;
    }
    else
    {
        *a = *b;
    }
    return;
}

void func6(double *a, double *b, double *c)
{
    double t;
    if (*a > *b)
    {
        t = *a;
        *a = *b;
        *b = t;
    }
    if (*a > *c)
    {
        t = *a;
        *a = *c;
        *c = t;
    }
    if (*b > *c)
    {
        t = *b;
        *b = *c;
        *c = t;
    }
    
}

void func7(void)
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
        {
            printf("%d \n", (int)tolower(ch) - 'a' + 1);
        }
        else
        {
            printf("-1");
        }

        while (getchar() != '\n')
            continue;        
    }
    
    return;
}

double power(int a, int b)
{
    double res = 1.0f;
    if (a == 0 && b == 0)
    {
        printf("zero to zero power is undefined\n");
        return res;
    }
    if (b == 0)
    {
        return res;
    }
    for (int i=0; i < abs(b); i++)
    {
        res *= a;
    }
    return (b>0)? res: 1/res;
}

double func9(double a, int b)
{
    if (a == 0 && b == 0)
    {
        printf("zero to zero power is undefined\n");
        return 1.0f;
    }
    if (a==0)
    {
        return 1.0;
    }
    if (b == 1)
    {
        return a;
    }
    double res =  a * func9(a, abs(b)-1);
    return (b>0)? res: 1/res;
}

void to_base_n(long n, int m)
{
    int r;
    r = n % m;
    if (n >= m)
    {
        to_base_n(n/m, m);
    }
    printf("%d", r);
}

void Fibonacci(int n)
{
    int a=1, b=1;
    for (int i=1; i<=n; i++)
    {
        printf("%d ", a);
        b = a + b;
        a = b - a;
    }

    return;
}

int FibRec(int n)
{
   if (n>2)
   {
        return FibRec(n-1) + FibRec(n-2);
   }
   else
   {
       return 1;
   }
       
}