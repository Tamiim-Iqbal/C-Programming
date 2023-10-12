#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = a-b;
    if (ans > 0)
    {
        printf("%d\n",ans);
    }
    else 
    printf("0");
    return 0;
}