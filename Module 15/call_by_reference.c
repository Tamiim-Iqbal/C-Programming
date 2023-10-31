#include<stdio.h>
 void fun(int *x)
    {
        printf("Fun x value: %p\n",x);
        *x = 200;   
        printf("Fun x value: %d\n",*x);
    }
int main()
{
    int x = 100;
    printf("Main x address: %p\n",&x);
    fun(&x);
    printf("Main x value: %d\n",x);
    return 0;
}