#include<stdio.h>
void sort(int *ar)
{
    for (int i=0; i<3-1; i++)
    {
        for (int j=i+1; j<3; j++)
        {
            if (ar[i]>ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }       
        }
    }
    for (int i=0; i<3; i++)
    {
        printf("%d\n",ar[i]);
    }
}
int main()
{

    int ar[3];
    for (int i=0; i<3; i++)
    {
        scanf("%d",&ar[i]);
    }
    int a=ar[0];
    int b=ar[1];
    int c=ar[2];
    sort(ar);
    printf("\n");
    printf("%d\n%d\n%d",a,b,c);
    return 0;
}