#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int pos=0, neg=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0; i<n; i++)
    {
        if (ar[i]>0)
        {
            pos += ar[i];
        }
        else 
        {
            neg += ar[i];
        }
    }
    printf("%d %d",pos,neg);
    return 0;
}