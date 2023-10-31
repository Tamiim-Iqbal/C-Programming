#include <stdio.h>
#include <string.h>
int is_palindrome(char *ch)
{
    int n = strlen(ch);
    int i = 0;
    int j = n-1;
    int Palindrome = 1;
    while (i < j)
    {
        if(ch[i] != ch[j])
        {
            Palindrome = 0;
            break;
        }
        i++;
        j--;
    }
    return Palindrome;
}
int main()
{
    char ch[1000];
    scanf("%s",ch);

    int Palindrome = is_palindrome(ch);
    if (Palindrome == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}