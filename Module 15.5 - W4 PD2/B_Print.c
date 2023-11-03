#include<stdio.h>
void fun(int x)
{
    int ar[x];
    for (int i=1; i<=x; i++)
    {
        printf("%d ",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}