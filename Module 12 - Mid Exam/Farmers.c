#include<stdio.h>
int main() 
{ 
    int t;
    scanf("%d",&t);
    while (t>0)
    {
    int M1, D, M2;
    scanf("%d %d %d", &M1, &M2, &D);
    M2 = M1+M2;
    int days = (M1 * D) / M2;
    int ans=D-days;
    printf("%d\n",ans);
    t--;
    }
    return 0;
}