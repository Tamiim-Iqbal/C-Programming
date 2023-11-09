#include<stdio.h>
long long int fun(int ar[], int n, int i)
{
    if (i==n) return 0;
    return ar[i]+fun(ar,n,i+1);
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
    long long int ans = fun(ar,n,0);
    printf("%lld",ans);
    return 0;
}