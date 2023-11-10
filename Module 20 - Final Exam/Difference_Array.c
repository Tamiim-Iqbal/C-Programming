#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int k=0; k<t; k++)
    {
        int n;
        scanf("%d",&n);
        int a[n],b[n],c[n];
        for (int j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }
        for (int j=0; j<n; j++)
        {
            b[j]=a[j];
        }
        for (int j=0; j<n; j++)
        {
            b[j]=a[j];
        }
        for (int i=0; i<n-1; i++)
        {
        for (int j=i+1; j<n; j++)
        {
            if (b[i]>b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }       
        }
        }
        // for (int j=0; j<n; j++)
        // {
        //     printf("%d ",b[j]);
        // }
        for (int j=0; j<n; j++)
        {
            c[j] = abs(a[j]-b[j]);
        }
        for (int j=0; j<n; j++)
        {
            printf("%d ",c[j]);
        }
        printf("\n");
    }
    return 0;
}