#include<stdio.h>

int main()
{
    char a[12];
    fgets(a,12,stdin);
    a[11] ='\0';
    printf("%s",a);
    return 0;
}