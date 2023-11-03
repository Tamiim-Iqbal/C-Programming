#include<stdio.h>
void fun(int x, int y)
{
    int res=x+y;
    printf("%d",res);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    fun(a,b);
    return 0;
}