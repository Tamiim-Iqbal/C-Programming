#include<stdio.h>
long long int fact(long long int n)
{
    if (n==0) return 1;
    long long int ans = fact(n-1);
    return n*ans;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int result = fact(n);
    printf("%lld",result);
    return 0;
}