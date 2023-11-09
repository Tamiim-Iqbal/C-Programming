#include<stdio.h>
int main()
{
    int n,m; //n=row, m=col
    scanf("%d %d",&n,&m);
    int ar[n][m];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=m-1; j>=0; j--)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}