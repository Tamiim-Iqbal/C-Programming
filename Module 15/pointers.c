#include<stdio.h>
int main()
{
    int x=100;
    int *ptr = &x;

    printf("x address: %p\n",&x);   
    printf("x address: %p\n",ptr);      // &x=ptr

    printf("x value: %d\n",x);
    printf("x value: %d\n",*ptr);       // x=*ptr

    printf("x er memory size: %d\n",sizeof(x));
    printf("ptr er memory size: %d\n",sizeof(ptr));

    // x=200;
    // printf("changed x value: %d",x);
    // printf("changed x value: %d",*ptr);

    *ptr=300;
    printf("changed x value: %d\n",x);
    printf("changed x value: %d\n",*ptr);
    return 0;
}