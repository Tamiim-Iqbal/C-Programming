#include<stdio.h>
#include<string.h>
void fun(char ar[])
{
    printf("%d\n",strlen(ar));
    printf("%s",ar);
}
int main()
{
    char ar[20]="Hello";
    fun(ar);
    return 0;
}