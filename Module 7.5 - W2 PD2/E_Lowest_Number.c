#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int mn = INT_MAX;
    int pos;
    for (int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        if (ar[i]<mn)
        {
            mn = ar[i];
            pos = i+1;
        }
    }
    printf("%d %d",mn, pos);
    
    return 0;
}