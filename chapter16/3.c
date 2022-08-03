#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.1415926
#define DEG2RADIA(X) ((PI / 180) * X)  
#define TOX(r,A) (r)*cos(DEG2RADIA(A))
#define TOY(r,A) (r)*sin(DEG2RADIA(A))


//极坐标
typedef struct polar
{
    int r;
    int A;
}POLAR;


// 直角坐标
typedef struct cartesion
{
    int x;
    int y;
}CARTESION;

//gcc -lm

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Paramter error");
        exit(EXIT_FAILURE);
    }

    int r = atoi(argv[1]);
    int a = atoi(argv[2]);

    printf("modulo: %d, degree: %d to (%lf, %lf)", r, a, TOX(r, a), TOY(r, a));

    return 0;
}


