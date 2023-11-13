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
    if (n==0)
    {
        printf("0");
    }
    fun(2,n);
    printf("1");
    return 0;
}