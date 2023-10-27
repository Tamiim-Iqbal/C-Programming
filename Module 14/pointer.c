#include<stdio.h>
int main()
{
    int x = 10;
    //printf("%p\n",&x);      // x address print
    int *p = &x;
    //printf("%p\n",p);       // x address print
    // dereference
    //printf("%d\n",*p);      // x value print
    *p = 500;                 // x value change 
    printf("%d\n",x);

    return 0;
}