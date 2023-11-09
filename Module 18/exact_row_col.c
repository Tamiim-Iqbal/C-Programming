// Row
// #include<stdio.h>
// int main()
// {
//     int row,col;
//     printf("Enter row & col: ");
//     scanf("%d %d",&row,&col);
//     int ar[row][col];
//     printf("Input: \n");
//     for (int i=0; i<row; i++)
//     {
//         for (int j=0; j<col; j++)
//         {
//             scanf("%d",& ar[i][j]);
//         }
//     }
//     int r;
//     printf("Enter row no: ");
//     scanf("%d",&r);
//     printf("Output for %d index row \n",r);
//     for (int i=0; i<col; i++)
//     {
//         printf("%d ",ar[r][i]);
//     }  
//     return 0;
// }

// Col
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
    int c;
    scanf("%d",&c);
    for (int i=0; i<row; i++)
    {
        printf("%d \n",ar[i][c]);
    }  
    return 0;
}