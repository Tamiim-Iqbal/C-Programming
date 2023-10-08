#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if (c >='a' && c <= 'z')
    {
        //This is a lowercase letter. we need to convert.
        int ans = c-32;
        printf("%c",ans);
    }
    else
    {
        int ans = c+32;
        printf("%c",ans);
    }
    return 0;
}