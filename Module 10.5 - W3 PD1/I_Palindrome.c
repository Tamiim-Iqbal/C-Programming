#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int n=strlen(s);
    int i=0;
    int j=n;
    int result=1;
    while (i<j)
    {
        if (s[i]!=s[j-1])
        {
            result = 0;
            break;
        }
        i++;
        j--;
    }
    if (result==0)
    {
        printf("NO");
    }
    else 
    {
        printf("YES");
    }
    return 0;
}