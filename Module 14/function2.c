//return_type + no parameter
#include<stdio.h>
//int sum()       //ignore
//int sum(void)   //error
int sum()
{
    int x,y;
    scanf("%d %d", &x,&y);
    int s = x+y;
    return s;
}
int main()
{
    //int ans = sum(value);   
    int ans = sum();
    printf("%d",ans);
    return 0;
}