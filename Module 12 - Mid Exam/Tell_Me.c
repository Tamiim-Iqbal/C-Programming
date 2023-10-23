#include<stdio.h>
#include<stdbool.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t>0)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        bool flag=false;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int x;
        scanf("%d",&x);
        for (int i=0; i<n; i++)
        {
            if (a[i]==x)
            {
                flag=true;
            }
        }
        if (flag==true)
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
        t--;
    }
    
    return 0;
}