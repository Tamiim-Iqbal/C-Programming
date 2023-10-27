// #include<stdio.h>
// void fun(void)
// {
//     int s = 100;
//     printf("Fun s address: %p\n",&s);
// }
// int main()
// {
//     int s = 200;
//     printf("Main s address: %p\n",&s);
//     fun();
//     return 0;
// }

#include<stdio.h>

int x = 300;
void fun(void)
{
    printf("Fun x address: %p\n",&x);
}
int main()
{
    printf("Main x address: %p\n",&x);
    fun();
    return 0;
}