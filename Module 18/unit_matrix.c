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
    int flag=1;
    if (row != col)
    {
        flag=0;
    }
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            if (i==j)
            {
                if (ar[i][i]!=1)
                {
                    flag=0;
                }
                continue;
            }
            if (ar[i][j]!=0)
            {
                flag=0;
            }
        }
    }
    if (flag==1)
    {
        printf("Unit Matrix");
    }
    else 
    {
        printf("Not Unit");
    }
    return 0;
}