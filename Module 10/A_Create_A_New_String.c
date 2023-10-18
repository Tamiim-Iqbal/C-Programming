#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001],b[1001];
    scanf("%s %s",a,b);
    int l=strlen(a);
    int l2=strlen(b);

    printf("%d %d\n",l,l2);
    printf("%s %s\n",a,b);
    return 0;
}