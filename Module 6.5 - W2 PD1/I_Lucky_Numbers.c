#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a=x%10;
    int b=x/10;

    if (a%b == 0 || b%a == 0)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
    return 0;
}