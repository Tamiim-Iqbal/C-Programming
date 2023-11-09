#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d",& ar[i][j]);
        }
    }
    int psum=0;
    int ssum=0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i==j)
            {
                psum = psum+ar[i][j];
            }
            else if (i+j==n-1)
            {
                ssum = ssum+ar[i][j];
            }
        }
    }
    int ans = psum-ssum;
    printf("%d",abs(ans));
}