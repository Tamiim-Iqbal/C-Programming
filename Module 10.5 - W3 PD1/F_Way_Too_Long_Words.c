#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t>0)
    {
        char a[101];
        scanf("%s",a);
        int s=strlen(a);
        if (s<=10)
        {
            printf("%s\n",a);
        }
        else 
        {
            printf("%c%d%c\n",a[0],s-2,a[s-1]);
        }
        t--;
    } 
    return 0;
}