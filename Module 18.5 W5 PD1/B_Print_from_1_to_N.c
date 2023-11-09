#include<stdio.h>
void fun(int i,int n)
{
    if (i>n) return; //Base case
    printf("%d\n",i);
    fun(i+1,n);
}
int main()
{
    int n;
    int i=1;
    scanf("%d",&n);
    fun(i,n);
    return 0;
}