#include<stdio.h>
#include<string.h>
int main() 
{  
    int t;
    scanf("%d",&t);

    while (t>0)
    {
        char str[10000];
        scanf("%s", str);
        int capital = 0;
        int small = 0;
        int digit = 0;
        int i=0;
        while (str[i] != '\0')
        {
        if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        } 
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capital++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            small++;
        }
        i++;
        }
        printf("%d %d %d\n", capital, small, digit);
        t--;
    }
    return 0;
}