#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int max=0,x;
    for (int i=0; i<n; i++)
    {
        scanf("%d",&x);
        if (x>max)
        {
            max=x;
        }
    }
    printf("%d\n",max);
    return 0;
}