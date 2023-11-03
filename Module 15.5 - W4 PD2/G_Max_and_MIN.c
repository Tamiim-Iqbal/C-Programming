#include<stdio.h>
int min(int *ar, int n)
{
    int minNum = ar[0];
    for (int i=0; i<n; i++)
    {
        if (ar[i] < minNum)
        {
            minNum = ar[i];
        }
    }
    return minNum;
}
int max(int *ar, int n)
{
    int maxNum = ar[0];
    for (int i=0; i<n; i++)
    {
        if (ar[i] > maxNum)
        {
            maxNum = ar[i];
        }
    }
    return maxNum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int Min = min(ar, n);
    int Max = max(ar, n);
    printf("%d %d", Min, Max);
    return 0;
}