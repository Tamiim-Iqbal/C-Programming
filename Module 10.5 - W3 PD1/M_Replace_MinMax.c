#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int mn = INT_MAX;
    int mx = INT_MIN;
    int mn_ind,mx_ind;

    for (int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i=0; i<n; i++)
    {
        if (ar[i]>mx)
        {
            mx = ar[i];
            mx_ind = i;
        }
    }
    for (int i=0; i<n; i++)
    {
        if (ar[i]<mn)
        {
            mn = ar[i];
            mn_ind = i;
        }
    }
    int tmp=mn;
    ar[mn_ind]=mx;
    ar[mx_ind]=tmp;

    for (int i=0; i<n; i++)
    {
        printf("%d ",ar[i]);
    } 
    return 0;
}