#include<stdio.h>
 void fun(int x)
    {
        printf("Fun x address: %p\n",&x);
        x=100;
        printf("Fun x value: %d\n",x);

    }
int main()
{
    int x = 10;
    printf("Main x address: %p\n",&x);
    fun(x);
    printf("Main x value: %d\n",x);

    return 0;
}