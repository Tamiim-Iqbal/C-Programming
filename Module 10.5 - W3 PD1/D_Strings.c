#include<stdio.h>
#include<string.h>
int main()
{
    char a[22],b[11],c[11];
    scanf("%s %s",a,b);
    int s1=strlen(a);
    int s2=strlen(b);

    strcpy(c,a);
    strcat(a,b);
    char tmp=c[0];
    c[0]=b[0];
    b[0]=tmp;
    printf("%d %d\n",s1,s2);
    printf("%s\n",a);
    printf("%s %s",c,b);
    return 0;
}