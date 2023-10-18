#include<stdio.h>
int main()
{
    int ar[5];
    char a[6];
    int sz=sizeof(ar)/sizeof(int);
    int sz2=sizeof(a)/sizeof(char);
    printf("%d\n%d",sz,sz2);
    return 0;
}