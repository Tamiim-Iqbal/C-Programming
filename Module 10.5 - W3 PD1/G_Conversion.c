#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",s);
    int n=strlen(s);
    for (int i=0; i<n; i++)
    {
        if (s[i]>= 'a' && s[i]<= 'z')
        {
            s[i]=s[i]-32;
        }
        else if (s[i]==',')
        {
            s[i]=s[i]-12;
        }
        else
        {
            s[i]=s[i]+32;
        }
    }
    printf("%s",s);
    return 0;
}
