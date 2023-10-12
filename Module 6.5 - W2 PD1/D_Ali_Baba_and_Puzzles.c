#include<stdio.h>
int main()
{
    int a,b,c,sum;
    scanf("%d %d %d %d",&a,&b,&c,&sum);
    if (a+b-c == sum || a+b*c == sum || a-b+c == sum|| a-b*c == sum || a*b+c == sum || a*b-c == sum)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
    return 0;
}