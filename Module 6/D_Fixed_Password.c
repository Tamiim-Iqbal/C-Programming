#include<stdio.h>
int main()
{
    int x;
    int y=1999;
    while (scanf("%d",&x) != EOF)
    {
        if (x==y)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}