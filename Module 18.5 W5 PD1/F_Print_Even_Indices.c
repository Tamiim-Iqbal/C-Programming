#include<stdio.h>
void fun(int ar[],int n, int i)
{
    if (i==n) return;

        fun(ar,n,i+1);
        if (i%2 == 0)
        {
            printf("%d ",ar[i]);
        }
        
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    fun(ar,n,0);
    return 0;
}