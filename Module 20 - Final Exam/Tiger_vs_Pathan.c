#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        char c[n];
        scanf("%s",c);
        int t=0,p=0;
        for (int j=0; j<n; j++)
        {
            if (c[j]=='P')
            {
                p++;
            }
            else if (c[j]=='T')
            {
                t++;
            }
        }
        if (t>p)
        {
            printf("Tiger\n");
        }
        else if (p>t)
        {
            printf("Pathaan\n");
        }
        else if (t==p)
        {
            printf("Draw\n");
        }
    }
    return 0;
}