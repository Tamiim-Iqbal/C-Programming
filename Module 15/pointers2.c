#include<stdio.h>
int main()
{
    double x=5.50;
    double *ptr = &x;
    double *ptr2 = ptr;

    printf("x value: %.2lf\n",x);
    printf("x value: %.2lf\n",*ptr);
    printf("x value: %.2lf\n",*ptr2);

    printf("x size: %d\n", sizeof(x));
    printf("ptr size: %d\n", sizeof(ptr));
    printf("ptr size: %d", sizeof(ptr2));

    return 0;
}