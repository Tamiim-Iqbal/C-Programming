#include<stdio.h>
void fun(int i,int n)
{
    if (i>n) return;
    fun(i+1,n);
    printf("%d ",i);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(1,n);
    return 0;
}