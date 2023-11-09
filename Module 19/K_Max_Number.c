#include<stdio.h>
#include<limits.h>
int fun(int ar[], int n, int i)
{
    if (i==n) return INT_MIN;
    int ans = fun(ar,n,i+1);
    if (ar[i]>ans)
    {
        return ar[i];
    }
    else 
    {
        return ans;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int max = fun(ar,n,0);
    printf("%d",max);
    return 0;
}