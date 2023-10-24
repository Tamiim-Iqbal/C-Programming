#include<stdio.h>
int main()
{
    int n,k=1;                        //if k = 1 once
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {                                 // if k = 1 after each line
        for (int j=1; j<=k; j++)
        {                             // if k = 1 after every * print
            printf("*");
        } 
        k++;
        printf("\n");
    }   
    return 0;
}