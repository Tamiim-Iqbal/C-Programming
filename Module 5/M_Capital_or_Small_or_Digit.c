#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if (c >= '0' && c <= '9')
    {
        printf("IS DIGIT\n");
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }
    else 
    {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
    return 0;
}