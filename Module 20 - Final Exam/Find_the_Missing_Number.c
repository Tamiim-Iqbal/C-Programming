#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        long long int ar[4];
        for (int i=0; i<4; i++)
        {
            scanf("%lld",&ar[i]);
        }
        
        long long int multi = (ar[1]*ar[2]*ar[3]);
        long long int d = ar[0]/multi;
        if (ar[1]*ar[2]*ar[3]*d==ar[0])
        {
            printf("%lld\n",d);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}