//return_type + parameter
#include<stdio.h>
int sum(int x, int y)
{
    int s = x+y;
    return s;
}
int main()
{
    //int ans = sum(5,10);
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = sum(a,b);
    printf("%d",ans);
    return 0;
}