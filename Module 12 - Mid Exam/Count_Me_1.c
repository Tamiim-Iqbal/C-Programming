#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int two=0, three=0;
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0; i<n; i++)
    {
        if (a[i]%2==0)
        {
            two++;
        }
        else if (a[i]%3 == 0)
        {
            three++;
        }
    }
    printf("%d %d",two,three);
    
    return 0;
}