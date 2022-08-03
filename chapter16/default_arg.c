#include <stdio.h>
#include <stdarg.h>

#define default_arg(x,v) (x) ? x : v 



void func(int a, double b)
{
    printf("a = %d, b = %lf\n", a, b);
}


typedef struct 
{
    int a;
    double b;
}f_args;

void var_f(f_args in)
{
    int a = default_arg(in.a, 10);
    double b = default_arg(in.b, 20.0);
    func(a, b);
}

#define wrap_func(...) var_f((f_args){__VA_ARGS__})

int main(void)
{
    wrap_func(.a=99, .b=1000);

    return 0;
}