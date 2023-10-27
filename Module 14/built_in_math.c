#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double x = 3.1;
    double y = 3.5;
    double z = -5.45;

    double a = ceil(x);
    double b = ceil(y);

    double c = floor(x);
    double d = floor(y);

    double e = round(x);
    double f = round(y);

    double g = sqrt(x);

    double h = pow(x,y);

    double i = fabs(z);
    
    printf("Ceil 1: %.2lf\n",a);
    printf("Ceil 1: %.2lf\n",b);
    printf("Floor 1: %.2lf\n",c);
    printf("Floor 2: %.2lf\n",d);
    printf("Round 1: %.2lf\n",e);
    printf("Round 2: %.2lf\n",f);
    printf("Sqrt : %.2lf\n",g);
    printf("Pow : %.2lf\n",h);
    printf("Abs : %.2lf\n",i);
    return 0;
}