#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int line=(n+1)/2+5;
    int star = 1;
    int space = line-1;
    for (int i=1; i<=line; i++)
    {
        for (int j=1; j<=space; j++)
        {
            printf(" ");
        } 
        for (int j=1; j<=star; j++)
        {
            printf("*");
        }
        space--;
        star=star+2;
        printf("\n");
    }
    int s=((line*2)-1-n)/2;
    for (int i=1; i<=5; i++)
    {
        for (int i=1; i<=s; i++)
        {
            printf(" ");
        }
        for (int i=1; i<=n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}