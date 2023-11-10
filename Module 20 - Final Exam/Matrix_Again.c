#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int ar[row][col];
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            scanf("%d",& ar[i][j]);
        }
    }
    int r=row-1;
    for (int i=0; i<col; i++)
    {
        printf("%d ",ar[r][i]);
    }  
    printf("\n");
    int c=col-1;
    for (int i=0; i<row; i++)
    {
        printf("%d ",ar[i][c]);
    } 
    return 0;
}