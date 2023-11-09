#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int element = row*col;
    int ar[row][col];
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            scanf("%d",& ar[i][j]);
        }
    }
    int count=0;
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            if (ar[i][j]==0)
            {
                count++;
            }
        }
    }
    if (element == count)
    {
        printf("Zero Matrix");
    } 
    else
    {
        printf("Not Zero Matrix");
    } 
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int row,col;
//     scanf("%d %d",&row,&col);
//     //int element = row*col;
//     int ar[row][col];
//     for (int i=0; i<row; i++)
//     {
//         for (int j=0; j<col; j++)
//         {
//             scanf("%d",& ar[i][j]);
//         }
//     }
//     int count=1;
//     for (int i=0; i<row; i++)
//     {
//         for (int j=0; j<col; j++)
//         {
//             if (ar[i][j] != 0)
//             {
//                 count = 0;
//                 break;
//             }
//         }
//     }
//     if (count == 1)
//     {
//         printf("Zero Matrix");
//     } 
//     else
//     {
//         printf("Not Zero Matrix");
//     } 
//     return 0;
// }